// Include the libraries:
// LiquidCrystal_I2C.h: https://github.com/johnrickman/LiquidCrystal_I2C
#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // Change to (0x27,20,4) for 20x4 LCD.

int in1pin = 6;
int in2pin = 7; // h bridge pins

int button = 8; // button
//int rightbutton = 9; 

int trigPin = 9;    // TRIG pin
int echoPin = 10;    // ECHO pin

float duration_us, distance_cm;

void setup() {

  lcd.begin();               // initialize the lcd
  lcd.backlight();          // open the backlight 

  pinMode(in1pin, OUTPUT);
  pinMode(in2pin, OUTPUT); // outputs
  pinMode(trigPin, OUTPUT); // config trigger pin to output mode

  pinMode(button, INPUT_PULLUP); // inputs w internal pullup resistors
  pinMode(echoPin, INPUT);  // config echo pin to input mode 
  
}

void loop() {

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  int leftPinState = digitalRead(button); // set value names for read data
  
  duration_us = pulseIn(echoPin, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;
  lcd.clear();
  lcd.setCursor(0, 0); // start to print at the first row first column
  lcd.print("Dist: ");
  lcd.print(distance_cm);
  //lcd.setCursor(12,1);
  lcd.print(" cm");

 
  
  if (leftPinState == LOW) { // if left button is pressed ... 

    digitalWrite(in1pin, LOW); // make motor go one way
    digitalWrite(in2pin, HIGH);
    delay(3000);
  }

  else if ( distance_cm < 30) { // if ultrasonic sensor detects < 25cm

    digitalWrite(in1pin, HIGH);
    digitalWrite(in2pin, LOW); // make motor go other way
    
    
  }

  else { // if neither button is pressed ...

    digitalWrite(in1pin, LOW); // nothing happens
    digitalWrite(in2pin, LOW); 
    
  }
  
}
