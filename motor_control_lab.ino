#include "ultrasonic.h"
#include "potentiometer.h"
#include "servo.h"

#define ultrassonic_pin A1

void setup() {
  Serial.begin(9600);
  // setup_ultrasonic(9, 8);
  // setup_potentiometer(ultrassonic_pin);
  // setup_servo(2);
}

void loop() {
  // long cm = read_ultrasonic(9, 8);
  // float val = read_potentiometer(ultrassonic_pin);
  // set_servo_angle(90);

  // Serial.println(val);
}