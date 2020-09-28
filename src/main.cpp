#include <Arduino.h>

int analogVal;
int i = 2;
// the setup function runs once when you press reset or power the board

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  while (i < 7) {
    pinMode(i, OUTPUT);
    i++;
  }
}

// the loop function runs over and over again forever
void loop() {
  i = 2;
  while (i < 7) {
    digitalWrite(i, HIGH);
    delay(1000);
    analogVal = analogRead(A0);       // wait for a second
    delay(1000);
    Serial.println(i);
    Serial.println(analogVal);
    digitalWrite(i, LOW);
    delay(1500);
    i++;
  }
}