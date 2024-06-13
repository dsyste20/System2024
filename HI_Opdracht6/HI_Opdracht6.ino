#include <Servo.h>
#include <NewPing.h>

//servo object
Servo servo;

//pinnen voor de {trigger, echo, servo}
int pinsArray[] = {11, 7, 9};
const int maxAfstand = 10;

//NewPing object voor sensor met trigger, echo pin en maximale afstand
NewPing sensor(pinsArray[0], pinsArray[1], maxAfstand);

void setup()
{
  //seriele communicatie
  Serial.begin(9600);
  //motor aan de juiste pin
  servo.attach(pinsArray[2]);
  //motor begint op 0 graden
  servo.write(0);
}

void loop()
{
  //zal nooit een negatief getal zijn
  //van echo naar cm
  unsigned int cm = sensor.ping_cm();
  
  //toon de afstand op de seriele motor
  Serial.print("Distance : ");
  Serial.println(cm);
  Serial.println(" cm");

  checkDistance(cm);
  
  delay(50);
}

void checkDistance(int cm) {
  if (cm == 4) {
    // Als de afstand precies 4 cm is
    servo.write(0);
  } else if (cm > 4 && cm <= 10) {
    // Als de afstand tussen 4 en 10 cm is
    int angle = map(cm, 4, 10, 180, 0);
    servo.write(angle);
  }
}