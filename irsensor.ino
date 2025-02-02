#include <IRremote.h>
#include irsensor.h
// #define IR_RECEIVE_PIN 7
void setup_irsensor() {
  // Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

int read_irsensor() {
  if (IrReceiver.decode()) {
    IrReceiver.resume();
    return (IrReceiver.decodedIRData.command);
  }
}



