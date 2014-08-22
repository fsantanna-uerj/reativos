#include <ChibiOS.h>
#include <util/atomic.h>

const uint8_t LED1 = 13;
const uint8_t LED2 = 12;

static WORKING_AREA(waThread1, 64);
static msg_t Thread1(void *arg) {
  pinMode(LED1, OUTPUT);
  while (TRUE) {
    digitalWrite(LED1, HIGH);
    chThdSleepMilliseconds(600);
    digitalWrite(LED1, LOW);
    chThdSleepMilliseconds(600);
  }
  return 0;
}

static WORKING_AREA(waThread2, 200);
static msg_t Thread2(void *arg) {
  pinMode(LED2, OUTPUT);
  while (TRUE) {
    digitalWrite(LED2, HIGH);
    chThdSleepMilliseconds(1000);
    digitalWrite(LED2, LOW);
    chThdSleepMilliseconds(1000);
  }
  return 0;
}

void setup() {
  cli();
  halInit();
  chSysInit();
  
  chThdCreateStatic(waThread1, sizeof(waThread1),
    NORMALPRIO + 2, Thread1, NULL);
    
  chThdCreateStatic(waThread2, sizeof(waThread2),
    NORMALPRIO + 1, Thread2, NULL);
}

void loop() {
}
