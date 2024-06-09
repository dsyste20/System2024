#include <Servo.h>
#include <NewPing.h>

Servo servo;

const int pinTrig = 11;
const int pinEcho = 7;
const int pinServo = 9;
const int maxAfstand = 10;

//NewPing object voor sensor met trigger, echo pin en maximale afstand
NewPing sensor(pinTrig, pinEcho, maxAfstand);

void setup()
{
  //motor aan de juiste pin
  servo.attach(pinServo);
  //motor begint op 0 graden
  servo.write(0);
}

void loop()
{
  //zal nooit een negatief getal zijn
  //van echo naar cm
  unsigned int distance = sensor.ping_cm();
  
  if (distance > 0 && distance <= 10) {
  	int angle = map(distance, 4, 10, 180, 0);
    servo.write(angle);
  } else {
    servo.write(0);
  }
  
  delay(50);
}

// #include <Servo.h>

// Servo servo;

// const int pinTrig = 11;
// const int pinEcho = 7;
// const int pinServo = 9;

// void setup() {
//   Serial.begin(9600);
  
//   pinMode(pinTrig, OUTPUT);
//   pinMode(pinEcho, INPUT);
  
//   //motor aan de juiste pin
//   servo.attach(pinServo);
//   //motor begint op 0 graden
//   servo.write(0);
// }

// void loop() {
//   long duration, cm;
  
//   digitalWrite(pinTrig, LOW);
//   delayMicroseconds(2);
//   digitalWrite(pinTrig, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(pinTrig, LOW);
  
//   duration = pulseIn(pinEcho, HIGH);
//   cm = duration * 0.034 / 2;

//   checkDistance(cm);
  
//   delay(50);
// }

// void checkDistance(int cm) {
//   if (cm > 0 && cm <= 10) {
//     int angle = map(cm, 4, 10, 180, 0);
//     servo.write(angle);
//   } else {
//     servo.write(0);
//   }
// }
