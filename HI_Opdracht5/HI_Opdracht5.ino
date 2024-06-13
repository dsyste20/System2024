//Code voorbeeld uit de Vervolgworkshop gebruikt

#include <Servo.h>

Servo servo; 
const int pinsArray[] = {13, 11};
const int pinServo = 9; 

void setup() {
  //for loop voor de buttons.
  for (int count = 0; count < 2; count++) {
  	pinMode(pinsArray[count], INPUT_PULLUP);
  }
  //motor aan de juiste pin
  servo.attach(pinServo);
  //motor begint op 0 graden
  servo.write(0); 
}

void loop() {
  //buttons zijn niet gedrukt
  bool button1 = digitalRead(pinsArray[0]) == LOW;
  bool button2 = digitalRead(pinsArray[1]) == LOW;

  checkButtonPressed(button1, button2);
}
  
void checkButtonPressed(bool button1, bool button2) {
  //beide buttons ingedrukt zijn
  if (button1 && button2) {
    //120 graden, 3s draaien, 5s holden, 0.5s terug draaien
    moveMotorController(120, 3000, 5000, 500);
    //alleen button 1 ingdrukt is
  } else if (button1) {
    //120 graden, 3s draaien, 0s holden, 3s terug draaien
    moveMotorController(120, 3000, 0, 3000); 
    //alleen buttons 2 ingedrukt is
  } else if (button2) {
    //120 graden, 0.5s draaien, 0s holden, 0.5s terug draaien
    moveMotorController(120, 500, 0, 500); 
  } else {
    //niks ingedrukt dan terug naar 0 graden
    servo.write(0);
  }
}

void moveMotorController(int targetAngle, int duration, int holdTime, int returnTime) {
  moveMotor(targetAngle, duration);
  //als er hold tijd is dan holden
  if (holdTime > 0) delay(holdTime);
    //beweeg terug naar 0 graden
  	moveMotor(0, returnTime);
}

void moveMotor(int targetAngle, int duration) {
  //lees wat de angle is
  int angle = servo.read();
  //hoe de motor moet draaien
  int steps = abs(targetAngle - angle);
  //tijd van de steps verdelen
  int delayTime = duration / steps;
  
  //bewegings richting bepalen vooruit : achteruit
  int direction = (targetAngle > angle) ? 1 : -1;
  for (int position = angle; position != targetAngle; position += direction) {
    //is button ingedrukt tijdens bewegen
    if (!isButtonPressed()) {
      //niks ingedrukt dan terug naar 0 graden
      servo.write(0);
      return;
    }
    servo.write(position);
    //delay van de motor met de gegeven tijd
    delay(delayTime);
  }
  //motor heeft de angle bereikt 
  servo.write(targetAngle);
}

bool isButtonPressed() {
  //controleer of een van de buttons nog steeds ingedrukt wordt
  return digitalRead(pinsArray[0]) == LOW || digitalRead(pinsArray[1]) == LOW;
}