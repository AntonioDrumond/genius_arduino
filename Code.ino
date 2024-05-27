#include <SoftwareSerial.h>
#define poten A0
#define l1 9
#define l2 8
#define l3 7
#define l4 6
#define l5 5
#define l6 4
#define l7 3
#define l8 2

void setup(){
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(l7, OUTPUT);
  pinMode(l8, OUTPUT);  
  Serial.begin(9600);
}

void loop(){
  if(analogRead(poten)==0){
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    digitalWrite(l7, LOW);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<125){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    digitalWrite(l7, LOW);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<250){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    digitalWrite(l7, LOW);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<375){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    digitalWrite(l7, LOW);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<500){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    digitalWrite(l7, LOW);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<625){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l5, HIGH);
    digitalWrite(l6, LOW);
    digitalWrite(l7, LOW);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<750){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l5, HIGH);
    digitalWrite(l6, HIGH);
    digitalWrite(l7, LOW);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<875){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l5, HIGH);
    digitalWrite(l6, HIGH);
    digitalWrite(l7, HIGH);
    digitalWrite(l8, LOW);
  }

  else if(analogRead(poten)<=1000){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l5, HIGH);
    digitalWrite(l6, HIGH);
    digitalWrite(l7, HIGH);
    digitalWrite(l8, HIGH);
  }
}