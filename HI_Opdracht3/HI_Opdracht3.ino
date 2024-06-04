// C++ code
//

//Pin Array van de lampjes
const int pinsArray[] = {11, 5};
// Pin van de button
const int pinButton = 8;

//State van de button begint bij uit.
int buttonState = 0;    
//prev state is ook uit.
int prevState = 0;     
//Er bestaat nog geen state dus counter op 0.
int stateCounter = 0;   

void setup()
{
  pinMode(pinButton, INPUT); 
  
  //for loop voor de lampjes.
  for (int count = 0; count < 2; count++) {
  	pinMode(pinsArray[count], OUTPUT);
  }
}

void loop()
{
  //lees de status van de knop
  buttonState = digitalRead(pinButton);

  //vergelijk de huidige knopstatus met de vorige knopstatus
  if (buttonState != prevState) {
    // Als de knopstatus is veranderd, controleer of de knop is ingedrukt
    if (buttonState == HIGH) {
      //Counnter + 1
      stateCounter++;
      //Roep functie aan.
      OnAndOff(stateCounter, 50); 
    }
  }
  
  //sla de huidige knopstatus op.
  prevState = buttonState;
}

void OnAndOff(int state, int time)
{   
  //if stateCount gedeeld door 2 kan dan lampje 1 uit en lampje 2 aan.
  if (stateCounter % 2 == 0) {
    digitalWrite(pinsArray[0], LOW);
    digitalWrite(pinsArray[1], HIGH);
  } else {
    //zo niet, dan lampje 2 uit en lampje 1 aan.
    digitalWrite(pinsArray[0], HIGH);
    digitalWrite(pinsArray[1], LOW);
  }
  
  delay(time);
}
