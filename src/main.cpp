// Llibreries
#include <Arduino.h>

// Definim a quin pin connectarem el led
#define LED 16

void setup() {

  Serial.begin(9600);
  // inicialitzem el led
  pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED,HIGH);
  Serial.println("ON");
  delay(1000);
  digitalWrite(LED,LOW);
  Serial.println("OFF");
  delay(1000);
}
