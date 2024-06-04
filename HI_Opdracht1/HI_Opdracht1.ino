//Array voor de pins
const int pinArray[] = {13, 10};

void setup()
{
  //For loop om door de array te lopen en dan de pins aan te laten gaan.
  for (int count = 0; count < 2; count++) {
    //pinMode --> Classe om de pin open te zetten --> pinMode(welke pin je wilt gebruiken, als INPUT of OUTPUT gebruiken)
  	pinMode(pinArray[count], OUTPUT);
  }
}

void loop()
{
  //door de array lopen en de functie knipper aan te roepen.
  for (int count = 0; count < 2; count++) { 
    knipper(count, 2000); 
  }
}

//functie knipper zegt wat digitalWrite moet doen
void knipper(int pin, int time)
{
  //pin aanzetten --> digitalWrite(welke pin je wilt gebruiken, 
  //wat je ermee wilt doen) aan = high = 1 = true , uit = low = 0 - false
  digitalWrite(pinArray[pin], HIGH);
  delay(time); // Wait for 2000 millisecond(s)
  digitalWrite(pinArray[pin], LOW);
  delay(time); // Wait for 2000 millisecond(s)
}
          