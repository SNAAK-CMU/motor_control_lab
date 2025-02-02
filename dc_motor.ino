#include <Motor_PID.h>

// Encoder pins
#define ENCA 9  // Encoder A
#define ENCB 8  // Encoder B

// Motor driver pins
#define IN2 13 
#define IN1 12
#define PWMPIN 11 //Enable Pin

// PID constants
float kp = 1;
float kd = 0.1;
float ki = 0.02;

// PWM range
int pwm_lower_limit = 0;
int pwm_upper_limit = 255;

// Motor object
motor motor1(ENCA, ENCB, IN2, IN1, PWMPIN, pwm_lower_limit, pwm_upper_limit);


void setup_dc_motor() {
    motor1.init(kp, kd, ki);
}

void set_motor_position(int POSITION) {
    motor1.set_target(POSITION);
    update_motor(POSITION);
}

void update_motor(int POSITION) {
    motor1.start();
    if (motor1.get_position() == POSITION) {
        stop_motor();
    }
}

void stop_motor() {
    motor1.turn_off();
}