#include <Servo.h>
#define TRIG 4
#define ECHO 3

Servo servo;
boolean isNear = false;

void setup() 
{
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  servo.attach(9);
}

void loop() 
{
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(2);
    digitalWrite(TRIG, LOW);
    long distance = pulseIn(ECHO, HIGH) / 58;
  
    if(distance < 20)
    {
      servo.write(0);
      delay(2000);
    }
    else
    {
        servo.write(180);
    }
     delay(100);
}
