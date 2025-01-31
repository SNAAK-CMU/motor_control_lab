#include "ultrasonic.h"
#include "potentiometer.h"
#include "servo.h"
#include "slot.h"

#define ULTRASONIC_PIN A1
#define SLOT_PIN A5
void setup() {
  Serial.begin(9600);
  // setup_ultrasonic(9, 8);
  // setup_potentiometer(ULTRASONIC_PIN);
  // setup_servo(2);
  setup_slot(SLOT_PIN);
}

void loop() {
  // long cm = read_ultrasonic(9, 8);
  // float val = read_potentiometer(ULTRASONIC_PIN);
  // set_servo_angle(90);

  // Serial.println(val);
  bool output = read_slot(SLOT_PIN);
  Serial.println(output);
  delay(1);
}