# Hardware Interfacing
## Opdracht 1
- Sluit 2 LED’s aan op poort 10 en 13.
- Laat de LED’s om en om knipperen ( 2s / 2s ) 
- Eerst Sketch maken.
- Dan Tinkeren en testen. 
- Dan opbouwen en testen.

### Analyse
- Breadboard
- Arduino Uno
- 2 × lampjes rood
- 2 × weerstand 220 &#937;
- 8 × Connectie draadjes

### Screenshot
![Opdracht 1](images/HI_Opdracht1.png)

### Video
[Watch the lights in action](https://drive.google.com/file/d/1_OCjr27sfI1AORYTMdb1KNq0bK0ZVrU2/view?usp=sharing)

## Opdracht 2
- Sluit 8 LED’s aan op externe poorten.
- Laat de LED’s heen en weer lopen volgens deze link: http://bit.ly/ArduinoOpdracht3
- Eerst een Sketch maken, dan Tinkeren en daarna testen.
- Als laatste opbouwen en testen. 

### Analyse
- Breadboard
- Arduino Uno
- 8 × lampjes rood
- 8 × weerstand 220 &#937; 
- 20 × Connectie draadjes

### Screenshot
![Opdracht 2](images/HI_Opdracht2.png)

### Video
[Watch the lights in action](https://drive.google.com/file/d/14uPMsJM1mo8JpzF92DStko-pnzFxj2kE/view?usp=sharing)

## Opdracht 3
- Sluit een LED aan op poort 5 en een op poort 11. 
- Sluit een knop aan op poort 8. 
- Laat de 1e LED aangaan door de druk op een drukknop. 
- Laat de 1e LED uitgaan door de druk op dezelfde drukknop. 
- De 2e LED zal altijd tegenovergesteld reageren.

### Analyse
- Breadboard
- Arduino Uno
- 2 × lampjes rood
- 1 × drukknop
- 2 × weerstand 220 &#937;
- 1 × weerstand 10 K&#937;
- 10 × Connectie draadjes

### Screenshot
![Opdracht 3](images/HI_Opdracht3.png)

### Video
[Watch the lights in action](https://drive.google.com/file/d/1qpbXaGsZzz5JuwW4bawIBb56GxcNYYaC/view?usp=sharing)

## Opdracht 4
Maak een sketch om 6 LED’s aan te sturen afhankelijk van de 
hoekverdraaiing van de potmeter. (Eerst Tinkeren!!)

Je mag zelf de uitgangen kiezen waar de LED’s op worden aangesloten, 
je mag ook de analoge ingang zelf kiezen. 

- Vergeet niet de voorschakelweerstanden te gebruiken. 
- Hoe verder je de knop naar rechts (1023) draait, 
  hoe meer LED’s er uit gaan.

### Analyse
- Breadboard
- Arduino Uno
- 6 × lampjes rood
- 6 × weerstand 220 &#937;
- 1 × potentiometer 250 K&#937;
- 19 × Connectie draadjes

### Screenshot
![Opdracht 4](images/HI_Opdracht4.png)

### Video
[Watch the lights in action](https://drive.google.com/file/d/1cx3sWYz1wUCIyqnsXiN3122VU-KMwSQF/view?usp=sharing)

## Opdracht 5
Op de Arduino zijn 2 drukknoppen aangesloten. 
- Zolang op drukknop 1 wordt gedrukt draait een servomotor van 0° naar 120° in 3s. 
- Als de servomotor zijn uiterste stand heeft bereikt dan moet hij terugdraaien, ook in 3s. 
- Zolang op drukknop 2 wordt gedrukt draait een servomotor van 0° naar 120° in 0,5s.  
- Als de servomotor zijn uiterste stand heeft bereikt dan moet hij terugdraaien, ook in 0,5s. 
- Worden beide drukknoppen tegelijk ingedrukt, dan zal de servomotor in 3s van 0° naar 120° draaien, 
5s zo blijven staan en vervolgens in 0.5s terugdraaien naar 0°. 
- De beweging van de servomotor dient in één functie / methode te zijn ontworpen. 
- Ingangen en uitgangen zijn vrij te kiezen. 

### Analyse
- Breadboard
- Arduino Uno
- 2 × drukknop
- 2 × weerstand 10 K&#937;
- 9 × Connectie draadjes
- 1 × servo motor

### Screenshot
![Opdracht 5](images/HI_Opdracht5.png)

### Video
[Watch the motor in action](https://drive.google.com/file/d/1VK5yiW7jjpMgkDyAgyp0vdXB88dRVKZn/view?usp=sharing)

## Opdracht 6
Maak een schakeling en een sketch waarbij: 
- Een servomotor in rust op 0⁰ staat. 
- Als een object binnen 10 cm van de ultrasoon zender / ontvanger komt, 
dan staat de motor linksom. 
- Als het object op 4 cm staat, staat de servo volledig rechtsom (180⁰). 
- Alle afstanden hiertussen zullen een bijbehorende hoek krijgen.

### Analyse
- Breadboard
- Arduino Uno
- Ultrasone afstandssensor (4-pins)
- 11 × Connectie draadjes
- 1 × servo motor

### Screenshot
![Opdracht 6](images/HI_Opdracht6.png)

### Video
[Watch the motor in action](https://drive.google.com/file/d/1B4H8LVP_OZJKNtWh2OGSfFa8ZDjVKgGR/view?usp=sharing)

Sources: <br>
- Opzet: https://www.instructables.com/Controlling-a-Servo-With-an-Ultrasonic-Sensor-Usin/
- NewPing: https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home

[Bekijk alle filmpjes](https://drive.google.com/drive/folders/17FqKY_IycCiRQR89rUC5IURbRVuX_4Xd?usp=sharing)