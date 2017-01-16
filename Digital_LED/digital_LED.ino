/*  description:  
    数字食人鱼LED-用数字口控制 
    VCC -- VCC  
    GND -- GND  
    Signal -- digital 2    

    Author: Jiahui Tang
    Date: 2017-1-16
*/ 

int ledPin = 2;                                    // digital pin for LED signal

void setup() {
  Serial.begin(9600);                           // start the serial port
  pinMode(ledPin, OUTPUT);                         // sets the digital pin as output
} 

void loop() {
  digitalWrite(ledPin, HIGH);   // high
  delay(1000);                  // waits for a second
  digitalWrite(ledPin, LOW);    // low
  delay(1000);                  // waits for a second                                     // arbitary wait time.
}
