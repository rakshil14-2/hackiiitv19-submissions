// Code for detecting accident using ultrasonic sensors on arduino and will send information to sim service centers
long duration=0;
const int trigpin=5;
const int echopin=6;
void setup() {
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,INPUT);
pinMode(trigpin, OUTPUT);
pinMode(echopin,INPUT);
}

void loop() {
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW); 
 
 duration=pulseIn(echopin,HIGH);
 int distance=(duration*(0.034))/2;
// Serial.print("Distance is");
 Serial.println(distance);
 Serial.println(" ");

 delay(0);

}