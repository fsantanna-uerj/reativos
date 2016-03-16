#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include <stdarg.h>

#define USART_BAUDRATE 9600
#define BAUD_PRESCALE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)
void serial_init(void) {
  // Desliga as interrupções
  cli();

  /* 9600 baud */
  UBRR0L = (uint8_t)(BAUD_PRESCALE & 0xff);
  UBRR0H = (uint8_t)(BAUD_PRESCALE >> 8);
  UCSR0B =
        /* interrupt on receive */
        (1 << RXCIE0) |
        (1 << RXEN0)  |
        (1 << TXEN0);
  UCSR0C =
        /* no parity bit */
        (0 << UPM01) |
        (0 << UPM00) |
        /* asyncrounous USART */
        (0 << UMSEL01) |
        (0 << UMSEL00) |
        /* one stop bit */
        (0 << USBS0) |
        /* 8-bits of data */
        (1 << UCSZ01) |
        (1 << UCSZ00);

  // Liga as interrupções
  sei();
}

// Envia uma string pela porta serial
void serial_print(char * str) {
  int i = 0;
  while (str[i]) {
    UDR0 = str[i];
    i++;
    // Espera o caracter ser transmitido
    while (!(UCSR0A & (1<<5)));
  }
}

// Substituto de printf
char serial_buffer[256];
void serial_printf(char * fmt, ...) {
  va_list args;
  va_start(args, fmt);
  vsnprintf(serial_buffer, sizeof(serial_buffer), fmt, args);
  va_end(args);
  serial_print(serial_buffer);
}

/* take 64 bits of data in v[0] and v[1] and 128 bits of key[0] - key[3] */

void encipher(unsigned int num_rounds, uint32_t v[2], uint32_t const key[4]) {
    unsigned int i;
    uint32_t v0=v[0], v1=v[1], sum=0, delta=0x9E3779B9;
    for (i=0; i < num_rounds; i++) {
        v0 += (((v1 << 4) ^ (v1 >> 5)) + v1) ^ (sum + key[sum & 3]);
        sum += delta;
        v1 += (((v0 << 4) ^ (v0 >> 5)) + v0) ^ (sum + key[(sum>>11) & 3]);
    }
    v[0]=v0; v[1]=v1;
}

void decipher(unsigned int num_rounds, uint32_t v[2], uint32_t const key[4]) {
    unsigned int i;
    uint32_t v0=v[0], v1=v[1], delta=0x9E3779B9, sum=delta*num_rounds;
    for (i=0; i < num_rounds; i++) {
        v1 -= (((v0 << 4) ^ (v0 >> 5)) + v0) ^ (sum + key[(sum>>11) & 3]);
        sum -= delta;
        v0 -= (((v1 << 4) ^ (v1 >> 5)) + v1) ^ (sum + key[sum & 3]);
    }
    v[0]=v0; v[1]=v1;
}

#define LED 13
#define ROUNDS 30000

void setup() {
  serial_init();
  pinMode(LED, OUTPUT);
}

uint32_t key[] = { 1, 2, 3, 4 };
uint32_t v[]   = { 10, 20 };
int flag = 1; // Inicialmente vamos piscar o LED
int led = 0;  // Acende na primeira iteração

void loop() {
  led = led ^ flag; // Pisca o LED se flag = 1
  digitalWrite(LED, led);

  unsigned long t1 = millis();

  // Ocupa a CPU com umas contas
  serial_printf("Antes:   %ul %ul\n\r", v[0], v[1]);
  encipher(ROUNDS, v, key);
  serial_printf("Durante: %ul %ul\n\r", v[0], v[1]);
  decipher(ROUNDS, v, key);
  serial_printf("Depois:  %ul %ul\n\r", v[0], v[1]);

  unsigned long t2 = millis();

  // Imprime quanto tempo ficamos fazendo conta (e escrevendo na serial)
  serial_printf("\n\rTempo %ul\n\r\n\r" , t2-t1);

  // Espera mais um pouco...
  delay(500);
}

// Função mágica de interrupção da porta serial
ISR(USART_RX_vect) {
 char a = UDR0; // Lê o caracter recebido

 switch (a) {
   case '1':  led = 0; digitalWrite(LED, LOW);  break; // Desliga o LED
   case '2':  led = 1; digitalWrite(LED, HIGH); break; // Liga o LED
   case '3':  flag = flag ^ 1; break;                  // Muda o flag
   default: break;
 }
}
