#include "ultrasonic.h"
#include "potentiometer.h"
#include "servo.h"
#include "slot.h"

#define ULTRASONIC_PIN A0
#define POT_PIN A1
#define SLOT_PIN A5
#define SERVO_PIN 11
#define IR_PIN 7
#define BUTTON_PIN 2

bool override = false;
bool motor_mode = false; // motor mode= false represent position, true represents velocity
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;


void change_motor_mode() {
  if ((millis() - lastDebounceTime) > debounceDelay) {
    motor_mode = !motor_mode;
    lastDebounceTime = millis();
  }
}

void setup() {
  Serial.begin(9600);
  setup_ultrasonic(ULTRASONIC_PIN);
  setup_potentiometer(ULTRASONIC_PIN);
  setup_slot(SLOT_PIN);
  setup_irsensor(IR_PIN);
  setup_servo(SERVO_PIN);

  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), change_motor_mode, RISING);
}

void loop() {
  // long cm = read_ultrasonic(9, 8);
  // float val = read_potentiometer(ULTRASONIC_PIN);
  // set_servo_angle(90);

  // Serial.println(val);
  bool output = read_slot(SLOT_PIN);
  Serial.println(output);
  delay(1);

  bool slot_obstructed = read_slot(SLOT_PIN);
  float ultrasonic_distance_cm = read_ultrasonic(ULTRASONIC_PIN);
  float potentiometer_pos = read_potentiometer(POT_PIN, 10);  // set map maximum to be whatever we want(for now, 0 to 10)

  if(override) { 

    // TODO: Logic for override

  } else {

    if (slot_obstructed) {
      // rotate by degrees associated with distance, use map command
    }

    if (motor_mode) { // position control
      
    } else { // velocity control

    }





  }
}