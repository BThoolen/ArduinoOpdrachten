#include <Servo.h>

//aangeven op welke pin welke button zit
const int Button1Pin = 2;
const int Button2Pin = 3;

//servo definieren
Servo servo;

//int aanmaken met status van de button
int currentButton1State;
int currentButton2State;


void setup(){
  Serial.begin(9600);

  //aangeven dat de buttons in PULLUP modus moeten
  pinMode(Button1Pin, INPUT_PULLUP);
  pinMode(Button2Pin, INPUT_PULLUP);
  
  //aangeven op welke pin de servo zit
  servo.attach(4);
  
  //servo begin op 0 graden zetten
  servo.write(0);
  currentButton1State = digitalRead(2);
  currentButton2State = digitalRead(3);
}

void loop(){
  
  //Button 1
  //variabele de waarde geven van de knop
  currentButton1State = digitalRead(2);
  
  //in monitor zetten van de button waarde
  Serial.println(digitalRead(2));
  
  //als status van button low is (ingedrukt) dan geeft de console aan dat button 1 is ingedrukt
  if(currentButton1State == LOW){
  Serial.println("Button 1 is pressed");
    
    //voor elke keer dat deze for loop wordt doorlopen gaat de servomotor een paar graden verder en heeft een delay, zodat uiteindelijk de beweging van 0 naar 120 in 1s gaat
    for(int count = 0; count <= 24; count++)
    {
      servo.write(count * 12);
      delay(100);
    }
    //for loop om de servo van 120 naar 0 graden te laten gaan
    for(int count = 0; count <= 24; count++){
      servo.write(count / 12);
      delay(100);
    }
    
  }
  
  //in de monitor zetten van status van button 1 voor controle
  Serial.println(digitalRead(2));
  
  //Button 2 actie 
  
  //status van de knop in variabele stoppen
    currentButton2State = digitalRead(3);
  
  Serial.println(digitalRead(3));

  //als knop 2 is ingedrukt zal in de consolo worden gezet dat deze is ingedrukt.
  if(currentButton2State == LOW){
  Serial.println("Button 2 is pressed");
    
    //zelfde for loop als bij de eerste knop maar dan in 0,5s
    for(int count = 0; count <= 24; count++)
    {
      servo.write(count * 12);
      delay(50);
    }
    //loop voor terug draaien van 120 naar 0 graden van servomotor in 0,5s
    for(int count = 0; count <= 24; count++){
      servo.write(count / 12);
      delay(50);
    }
  }
    Serial.println(digitalRead(3));
 
  
  //Button 1 & 2 actie
  
  //status van buttons aan variabele meegeven
  currentButton1State = digitalRead(2);
  currentButton2State = digitalRead(3);
  
  //functie die uitgevoerd wordt als de status van beide knoppen low is
  if(currentButton1State == LOW && currentButton2State == LOW){
  
  //zelfde functie als bij knop 1 en 2 om de servo van 0 naar 120 te draaien daar 2s wachten en terug draaien
    for(int count = 0; count <= 24; count++)
    {
      servo.write(count * 12);
      delay(100);
    }
    delay(2000);
    for(int count = 0; count <= 24; count++){
      servo.write(count / 12);
      delay(100);
    }
  }
  
} 