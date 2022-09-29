#include <Servo.h>

//aangeven op welke pin de trig en echo pin zit van de ultrasoon
const int trigPin = 12;
const int echoPin = 8;

//floats aanmaken voor tijd dat de arduino aanstaat en voor de afstand tussen object en ultrasoon
float time;
float distance;

//servomotor instellen
Servo servo;

void setup(){
	Serial.begin(9600);
  
  //aangeven dat servo op pin 4 zit
  servo.attach(4);
  
  //start graden van servo op 0 zetten
  servo.write(0);
  
  //aangeven dat de trigpin output is
  pinMode(trigPin, OUTPUT);
  //aangeven dat de echopin input is
  pinMode(echoPin, INPUT);
  
}

void loop(){
  //zorgen dat de trigpin op low staat
	digitalWrite(trigPin, LOW);
  //even wachten zodat je zeker weet dat trigpin low is
  delayMicroseconds(2);
  
  //signaal versturen met de trigpin
  digitalWrite(trigPin, HIGH);
  //signaal duurt 10 microseconde
  delayMicroseconds(10);
  //uitzetten van signaal
  digitalWrite(trigPin, LOW);
  
  //tijd vragen van hoelang de echopin High was en dit in float time zetten
  time = pulseIn(echoPin, HIGH);
  
  //berekenen afstand dmv de snelheid van geluid
  distance = time / 58;
  
  //in monitor zetten van afstand in cm
  Serial.print("Afstand = ");
  Serial.print(distance);
  Serial.println("cm");
  
  //even wachten 100ms voor de volgende loop van start gaat
  delay(100);
  
  //als afstand tussen object en ultrasoon kleiner of gelijk is aan 4 graden van servo op 180 zetten
  if(distance <= 4){
  servo.write(180);
  }
    //als afstand tussen object en ultrasoon groter is dan 4 en kleiner is dan 5 graden van servo op 150 zetten
  if(distance > 4 && distance <5){
  servo.write(150);
  }
  //als afstand tussen obj en ultrasoon groter is dan 5 en kleiner dan 6 graden van servo op 120 zetten
  if(distance > 5 && distance <6){
  servo.write(120);
  }
    //als afstand tussen obj en ultrasoon groter is dan 6 en kleiner dan 7 graden van servo op 90 zetten
  if(distance > 6 && distance <7){
  servo.write(90);
  }
    //als afstand tussen obj en ultrasoon groter is dan 7 en kleiner dan 8 graden van servo op 60 zetten
  if(distance > 7 && distance <8){
  servo.write(60);
  }
    //als afstand tussen obj en ultrasoon groter is dan 8 en kleiner dan 9 graden van servo op 30 zetten
  if(distance > 8 && distance <9){
  servo.write(30);
  }
    //als afstand tussen obj en ultrasoon groter is dan 10 graden van servo op 0 zetten
  if(distance > 10){
  servo.write(0);
  }
}