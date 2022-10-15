// main

#include  <Servo.h>
const int TRIG =25 ;      // trigger en pin 25
const int ECO = 26;      // echo en pin 26
int DURACION;
int DISTANCIA;

void setup() {
  sensor();   
  declaraciones();
  Color();  
  Serial.begin(9600);   
}

void loop() {
  // put your main code here, to run repeatedly:

  movsensor();
}
