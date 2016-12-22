### LED

<img src="../imagens/led-01.jpg" align="right" width="200">

O diodo emissor de luz, também conhecido pela sigla em inglês
*LED (Light Emitting Diode)*, é usado para a emissão de luz em locais e
instrumentos onde se torna mais conveniente a sua utilização no lugar de uma
lâmpada.
Especialmente utilizado em produtos de microeletrônica como sinalizador de
avisos, também pode ser encontrado em tamanho maior, como em alguns modelos de
semáforos.
Também é muito utilizado em painéis de LED, cortinas de LED, pistas de LED e
postes de iluminação pública, permitindo uma redução significativa no consumo
de eletricidade.

No Arduino, o lado mais comprido do LED (*anodo*) deve ser conectado a um pino
digital de `OUTPUT` (fonte), enquanto que o lado mais curto (*catodo*) deve ser
conectado ao `GND` (terra).
Os lados devem ser separados por um resistor para controlar a corrente.

A placa do Arduino contém um LED embutido que está conectado ao pino `13`.

#### Exemplo

O exemplo a seguir pisca um LED a cada 500 milisegundos.

No circuito, o LED está ligado ao pino `13`:

<img src="../imagens/led-02.png" width="400">

O código configura o pino `13` como `OUTPUT`.
Em seguida, o `loop` do Arduino alterna entre ligar e desligar o LED a cada
500 milisegundos:

```
void setup() {                
    pinMode(13, OUTPUT);     
}

void loop() {
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
}
```

#### Links

- Wikipedia:   <https://pt.wikipedia.org/wiki/Diodo_emissor_de_luz>
- Arduino.cc:  <https://www.arduino.cc/en/tutorial/blink>
- Circuits.io: <https://circuits.io/circuits/3572951-led>
