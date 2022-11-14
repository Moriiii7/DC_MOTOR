#include <Arduino.h>
int in1 = 9;
int in2 = 8;
int enA = 10; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Girando izquierda");
  analogWrite(enA, 150);
  digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
  delay(5000);

  Serial.println("Apagado");
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
  delay(2000);

  Serial.println("Girando derecha");
  digitalWrite(in2, HIGH);
	digitalWrite(in1, LOW);
  delay(5000);

  Serial.println("Apagado");
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
  delay(2000);
}