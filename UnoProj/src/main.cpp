#include <Arduino.h>

#include <LiquidCrystal.h>
#include <Servo.h>
#include <Stepper.h>
// const int RW = 11;

const int STEPS = 2048;
Stepper stepper(STEPS, 8, 10, 9, 11);  
void setup()
{
  stepper.setSpeed(15);
}

void loop(){    
    stepper.step(1);     
    
}
