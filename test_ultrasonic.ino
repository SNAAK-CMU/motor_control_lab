#include "ultrasonic.h"

void setup() {
  Serial.begin(9600);
  setup_ultrasonic(9, 8);
}

void loop() {
  long cm = read_ultrasonic(9, 8);
  Serial.println(cm);
}