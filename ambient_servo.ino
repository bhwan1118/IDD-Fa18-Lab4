#include <Wire.h>
#include "Adafruit_VCNL4010.h"
#include <Servo.h>


Adafruit_VCNL4010 vcnl;

Servo myservo;  // create servo object to control a servo

float amb_old = 0; //initializing for first loop
float prox_old = 0; //initializing;


void setup() {
  Serial.begin(9600);
  Serial.println("VCNL4010 test");

  if (! vcnl.begin()){
    Serial.println("Sensor not found :(");
    while (1);
  }
  Serial.println("Found VCNL4010");

  myservo.attach(7);
}


void loop() {
   Serial.print("Ambient: "); Serial.println(vcnl.readAmbient());
   Serial.print("Proximity: "); Serial.println(vcnl.readProximity());
   delay(100);

  float amb_new = vcnl.readAmbient();

  float prox_new = vcnl.readProximity();

  float percent_change = abs(amb_new - amb_old)/amb_old;

  if(amb_old != 0 && percent_change >= 0.01){
    myservo.write(90);
    delay(500);
    amb_old = amb_new;
  }else{
    delay(500);
    amb_old = amb_new;
  }

  Serial.print(amb_old) ; Serial.print(amb_new);
  myservo.write(180);
     
}
