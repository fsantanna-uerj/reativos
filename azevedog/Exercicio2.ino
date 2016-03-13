int LED = 9;
int BTN_UP = 2;
int BTN_DWN = 3;
int now;
int old;
int wait = 500;
int exit1 = 0;
int state = HIGH;
int upLastClick=0;
int dwnLastClick=0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BTN_UP, INPUT);
  pinMode(BTN_DWN, INPUT);
}

void loop() {
  if (exit1) return;
  Serial.println(wait);
  now = millis();
  if (now - old >= wait) {
    state = !state;
    old = now;
    digitalWrite(LED, state);
  }


  int up =  digitalRead(BTN_UP);
  int dwn =  digitalRead(BTN_DWN);
  if (up && dwn) {
    int simClick = (dwnLastClick - upLastClick);
    simClick = simClick*simClick;
    simClick = sqrt(simClick);
    if (simClick < 500) {
      Serial.print("FIM");
      exit1 = 1;
      digitalWrite(LED, HIGH);
      return;
    }
  }

  if (up && (now-upLastClick)>100) {
    wait += 12;
    upLastClick = now;
    return;
  }

  if (dwn && (now-dwnLastClick)>100) {
    wait -= 12;
    dwnLastClick=now;
    return;
  }
}
