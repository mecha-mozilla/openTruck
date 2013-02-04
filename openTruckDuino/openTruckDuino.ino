#include <Servo.h>

int i = 0;

void setup(){
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  if(i > 8) i = 0;
  motor_drive(i);
  delay(1000);
  i++;
}

void motor_drive(int drive){
  switch(i){
    case 0:
      Serial.println("Forward");
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
      break;
    case 1:
      Serial.println("SHOTE BREAK");
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      break;
    case 2:
      Serial.println("Reverse");
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      break;
    case 3:
      Serial.println("Stop");
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      break;
    case 4:
      Serial.println("Low_Left");
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
      break;
    case 5:
      Serial.println("Low_Right");
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      break;
    case 6:
      Serial.println("HIGH_Left");
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
      break;
    case 7:
      Serial.println("HIGH_Right");
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      break;
    default:
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      break;
  } 
}
