//Code voorbeeld uit de Vervolgworkshop gebruikt

//sluit de lampjes aan op de pins
int pinsArray[] = {13, 11, 9, 7, 5, 3}; 
//sluit de LED aan op pin A2
int potPin = A2; 
//de startwaarde voor de potmeter is 0
int potMeterWaarde = 0;

void setup() {
  //initialiseren van elke LED pin als een output
  for (int count = 0; count < 6; count++) {
    pinMode(pinsArray[count], OUTPUT);
  }
  //defineer de pin van de potmeter als input
  pinMode(potPin, INPUT);
}

void loop() {
  //lees de potmeter
  int potMeterValue = analogRead(potPin);
  //bereken het aantal LED's die uit moeten zijn
  int ledsOff = map(potMeterValue, 0, 1023, 0, 6); 
  //update de status van de LEDs
  changeLeds(ledsOff);
  //voer een delay uit met als waarde de potmeter
  delay(potMeterWaarde);
}

//functie om het aantal LEDs dat uit is te controleren
void changeLeds(int numOff) {
  for (int count = 0; count < 6; count++) {
    if (count < numOff)
      digitalWrite(pinsArray[count], LOW);
    else
      digitalWrite(pinsArray[count], HIGH);
  }
}

