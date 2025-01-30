#include "ultrasonic.h"
#define ultrasonic_pin A0
void setup() {
  Serial.begin(9600);
  setup_ultrasonic(A0);
}

void loop() {
  float cm = read_ultrasonic(A0);
  Serial.println(cm);
}