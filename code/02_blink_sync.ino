#define LED1 13
#define LED2 12

int s1, s2;
int t1, t2;

unsigned long old;
 
void setup () {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    s1 = s2 = 0;
    t1 = t2 = 1000;
    old = millis();
}
 
void loop () {
    unsigned long now = millis();
    int dt = now - old;
    old = now;

    t1 -= dt;
    if (t1 <= 0) {
        t1 = 600;
        s1 = !s1;
        digitalWrite(LED1, s1);
    }

    t2 -= dt;
    if (t2 <= 0) {
        t2 = 1000;
        s2 = !s2;
        digitalWrite(LED2, s2);
    }
}
