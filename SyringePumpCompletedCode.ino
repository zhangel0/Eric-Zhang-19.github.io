#include <AccelStepper.h>

float VPSBigSyringe = 0.00272; //VPS = volume per step = mL/step
float VPSSmallSyringe = 0.00106;
float VFlowRate = 0.1; // in mL/min (divide by 60 for mL/s)

int dirPin = 2;
int stepPin = 3;
AccelStepper stepper(AccelStepper:: DRIVER, stepPin,dirPin);

int pushSyringe = 6;
int pullSyringe = 7;

int red_LED = 8;
int blue_LED = 9;
int green_LED = 10;

int limitSwitch = 11;

void setup() {
  // put your setup code here, to run once:
stepper.setMaxSpeed(4000);


 pinMode(pushSyringe, INPUT_PULLUP); 
 pinMode(pullSyringe,INPUT_PULLUP);

 pinMode(red_LED, OUTPUT);
 pinMode(blue_LED, OUTPUT);
 pinMode(green_LED, OUTPUT);

 pinMode(limitSwitch, INPUT_PULLUP);
 //attachInterrupt(digitalPinToInterrupt(limitSwitch), blink, FALLING);
}


void loop() {
  // put your main code here, to run repeatedly:
    int leftPinState = digitalRead(pushSyringe);
    int rightPinState = digitalRead(pullSyringe);
    int syringeStopper = digitalRead(limitSwitch);
    
if ( syringeStopper == HIGH){
  
    if (leftPinState == LOW) {
    stepper.setSpeed(VFlowRate/VPSBigSyringe);
    stepper.runSpeed();
    analogWrite(green_LED, 255);
    }

    if (rightPinState == LOW) {
      stepper.setSpeed(-VFlowRate/VPSBigSyringe);
      stepper.runSpeed();
      analogWrite(blue_LED, 255);
      
   
    }
      
    
  



}
if (syringeStopper == LOW){
 //stepper.stop();
  analogWrite(red_LED, 255);
  analogWrite(green_LED, 0);
  analogWrite(blue_LED, 0);

    if (rightPinState == LOW) {
      stepper.setSpeed(-VFlowRate/VPSBigSyringe);
      stepper.runSpeed();
      analogWrite(blue_LED, 255);
}

}
analogWrite(red_LED, 40);
    analogWrite(green_LED, 40);
    analogWrite(blue_LED, 0);
    }


 



//if (rightPinState == LOW){
  


//void blink(){





//// //defines pins numbers
//const int stepPin = 3; 
//const int dirPin = 4; 
//
//int pushSyringe = 6;
//int pullSyringe = 7;
//
//
// 
//void setup() {
//  // Sets the two pins as Outputs
//  pinMode(stepPin,OUTPUT); 
//  pinMode(dirPin,OUTPUT);
//  
//  pinMode(pushSyringe, INPUT_PULLUP);
//  pinMode(pullSyringe, INPUT_PULLUP);
//}
//
//void loop() {
//
//  int leftPinState = digitalRead(pushSyringe);
//  int rightPinState = digitalRead(pullSyringe);
//
//  
//  
//  if (leftPinState == LOW) {
//
//  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
//  // Makes 400 pulses for making two full cycle rotations
//  for(int x = 0; x < 400; x++) {
//    digitalWrite(stepPin,HIGH); 
//    delayMicroseconds(500); 
//    digitalWrite(stepPin,LOW); 
//    delayMicroseconds(500); 
//  }
//  
//  }
//  
//  else if (rightPinState == LOW){
//digitalWrite(dirPin,LOW); //Changes the rotations direction
//  
//    
//  // Makes 400 pulses for making two full cycle rotation
//  for(int x = 0; x < 400; x++) {
//    digitalWrite(stepPin,HIGH);
//    delayMicroseconds(500);
//    digitalWrite(stepPin,LOW);
//    delayMicroseconds(500);
//  }
//  }
//  
////  else {
////    
////  }
//}

// defines pins
//#define stepPin 2
//#define dirPin 3 
 
//void setup() {
//  // Sets the two pins as Outputs
//  pinMode(stepPin,OUTPUT); 
//  pinMode(dirPin,OUTPUT);
//}
//void loop() {
//  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
//  // Makes 200 pulses for making one full cycle rotation
//  for(int x = 0; x < 800; x++) {
//    digitalWrite(stepPin,HIGH); 
//    delayMicroseconds(700);    // by changing this time delay between the steps we can change the rotation speed
//    digitalWrite(stepPin,LOW); 
//    delayMicroseconds(700); 
//  }
//  delay(1000); // One second delay
//  
//  digitalWrite(dirPin,LOW); //Changes the rotations direction
//  // Makes 400 pulses for making two full cycle rotation
//  for(int x = 0; x < 1600; x++) {
//    digitalWrite(stepPin,HIGH);
//    delayMicroseconds(500);
//    digitalWrite(stepPin,LOW);
//    delayMicroseconds(500);
//  }
//  delay(1000);
//}
