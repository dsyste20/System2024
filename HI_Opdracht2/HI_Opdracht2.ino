//Code voorbeeld uit de Startworkshop gebruikt

//Array voor de pins
const int pinsArray[] = {13, 12, 11, 10, 8, 6, 4, 2};

void setup()
{
  //For loop om door de array te lopen en dan de pins aan te laten gaan.
  for (int count = 0; count < 8; count++) {
    //pinMode --> Classe om de pin open te zetten --> pinMode(welke pin je wilt gebruiken, als INPUT of OUTPUT gebruiken)
  	pinMode(pinsArray[count], OUTPUT);
  }
}

void loop()
{
  //door de array lopen van links naar rechts en de functie knipper aan te roepen.
  for (int count = 0; count < 8; count++) { 
    flash(count, 100); 
  }
  
  // Door de array lopen van rechts naar links en de functie knipper aan te roepen.
  for (int count = 7; count >= 0; count--) {
    flash(count, 100);
  }
}

//functie knipper zegt wat digitalWrite moet doen
void flash(int pin, int time)
{
  //pin aanzetten --> digitalWrite(welke pin je wilt gebruiken, 
  //wat je ermee wilt doen) aan = high = 1 = true , uit = low = 0 - false
  digitalWrite(pinsArray[pin], HIGH);
  delay(time);
  digitalWrite(pinsArray[pin], LOW);
}
