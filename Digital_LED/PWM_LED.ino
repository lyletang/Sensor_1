/*  description:  
    数字食人鱼LED-用PWM口控制 
    VCC -- VCC  
    GND -- GND  
    Signal -- PWM 3    

    Author: Jiahui Tang
    Date: 2017-1-16
*/ 

int ledPin = 3;         // PWM pin for LED signal
int val;                // temp value

void setup() {
  Serial.begin(9600);                           // start the serial port
  pinMode(ledPin, OUTPUT);                         // sets the digital pin as output
} 

void loop() {
  for(val = 0; val <= 255; val++) {
      analogWrite(ledPin, val);
      delay(10);
      }

  for(val; val >= 0; val--) {
      analogWrite(ledPin, val);
      delay(10);
      }
}
