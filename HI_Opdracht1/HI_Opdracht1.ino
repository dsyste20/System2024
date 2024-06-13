//Code voorbeeld uit de Startworkshop gebruikt

//Array voor de pins
const int pinsArray[] = {13, 10};

void setup()
{
  //For loop om door de array te lopen en dan de pins aan te laten gaan.
  for (int count = 0; count < 2; count++) {
    //pinMode --> Class om de pin open te zetten --> pinMode(welke pin je wilt gebruiken, als INPUT of OUTPUT gebruiken)
  	pinMode(pinsArray[count], OUTPUT);
  }
}

void loop()
{
  //door de array lopen en de functie knipper aan te roepen.
  for (int count = 0; count < 2; count++) { 
    knippertje(count, 2000); 
  }
}

//functie knipper zegt wat digitalWrite moet doen
void knippertje(int pin, int time)
{
  //pin aanzetten --> digitalWrite(welke pin je wilt gebruiken, 
  //wat je ermee wilt doen) aan = high = 1 = true , uit = low = 0 - false
  digitalWrite(pinsArray[pin], HIGH);
  delay(time); // Wait for 2000 millisecond(s)
  digitalWrite(pinsArray[pin], LOW);
  delay(time); // Wait for 2000 millisecond(s)
}
          