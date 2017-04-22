#include "xtea.c.h"

#define LED 13

void setup () {
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}
 
uint32_t key[] = { 1, 2, 3, 4 };
uint32_t v[]   = { 10, 20 };

void loop () {
    {
        static int led = 0;
        digitalWrite(LED, led=!led);
    }

    unsigned long t1 = millis();

    Serial.print("antes: ");
        Serial.print(v[0]);
        Serial.print(" ");
        Serial.println(v[1]);

    encipher(32, v, key);

    Serial.print("durante: ");
        Serial.print(v[0]);
        Serial.print(" ");
        Serial.println(v[1]);

    decipher(32, v, key);

    Serial.print("depois: ");
        Serial.print(v[0]);
        Serial.print(" ");
        Serial.println(v[1]);

    unsigned long t2 = millis();
    Serial.println(t2-t1);
}
