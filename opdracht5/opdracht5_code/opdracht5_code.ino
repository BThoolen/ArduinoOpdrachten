//cijfer aan pin linken
int blauwLedPin=9;
int groenLedPin=10;
int roodLedPin=11;

void setup() {
Serial.begin(9600);
  //alle 3 de pinnen van de RGB led definieren
pinMode(roodLedPin,OUTPUT);
pinMode(groenLedPin,OUTPUT);
pinMode(blauwLedPin,OUTPUT);
}
void loop() {
//rood
  analogWrite(roodLedPin,255);
  analogWrite(groenLedPin,0);
  analogWrite(blauwLedPin,0);
  //arduino even laten wachten 
  delay(200);
//groen
  analogWrite(roodLedPin,0);
  analogWrite(groenLedPin,255);
  analogWrite(blauwLedPin,0);
  delay(200);
//blauw
  analogWrite(roodLedPin,0);
  analogWrite(groenLedPin,0);
  analogWrite(blauwLedPin,255);
  delay(200);
//paars
  analogWrite(roodLedPin,255);
  analogWrite(groenLedPin,0);
  analogWrite(blauwLedPin,255);
  delay(200);
//geel
  analogWrite(roodLedPin,255);
  analogWrite(groenLedPin,255);
  analogWrite(blauwLedPin,0);
  delay(200);
//cyan
  analogWrite(roodLedPin,0);
  analogWrite(groenLedPin,255);
  analogWrite(blauwLedPin,255);
  delay(200);
//wit
  analogWrite(roodLedPin,255);
  analogWrite(groenLedPin,255);
  analogWrite(blauwLedPin,255);
  delay(200);
}