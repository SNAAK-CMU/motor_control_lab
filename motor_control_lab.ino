#include "ultrasonic.h"
void setup_ultrasonic(int trig, int echo) {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

// Returns ultrasonic distance in cm
long read_ultrasonic(int trig, int echo) {
  long mm, duration;
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
 
  pinMode(echo, INPUT);
  duration = pulseIn(echo, HIGH);
  mm = (duration/2) / 29.1;
  return mm;
}