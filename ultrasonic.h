#ifndef ULTRASONIC_H
#define ULTRASONIC_H

void setup_ultrasonic(int trig, int echo);
long read_ultrasonic(int trig, int echo);
#endif