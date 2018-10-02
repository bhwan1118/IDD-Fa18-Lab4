/* Servo potentiometer control
 *  
 *  
 */

#include <Servo.h>
#include <math.h> //for rounding

Servo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

}

//issue is type conversion from float to int. As we are getting zero because of fraction.
void loop() {
  // put your main code here, to run repeatedly:
  
  // read the input from potentiometer on analog pin 0:
  float sensorValue = analogRead(A0);
  float temp_divide;

  //Transform the range of the potentiometer between 0 and 180
  temp_divide = sensorValue/1024;
  pos = (temp_divide)*180;

  Serial.println(pos); Serial.println(sensorValue); Serial.println(temp_divide);

  myservo.write(pos);
  delay(15);

}
