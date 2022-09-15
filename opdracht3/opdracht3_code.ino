//ints aanmaken voor de ingangen waar de potentiometer en leds op aangesloten zijn in de arduino
int potPin = A5;
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;

void setup(){
  //instagneren van de potentiometer en leds
pinMode(potPin, INPUT);
pinMode(ledPin1, OUTPUT);   
pinMode(ledPin2, OUTPUT);   
pinMode(ledPin3, OUTPUT);   
pinMode(ledPin4, OUTPUT);   
pinMode(ledPin5, OUTPUT);   
pinMode(ledPin6, OUTPUT);   
pinMode(ledPin7, OUTPUT);   
Serial.begin(9600);
}

void loop(){
//hoeveelheid voltage die binnen komt van de potenti0meter
int potMeasure = analogRead(A5);   

//bij minder dan 75 alle leds uit
Serial.println(potMeasure);   
if(potMeasure < 75){     
  digitalWrite(ledPin1,LOW);     
  digitalWrite(ledPin2,LOW);     
  digitalWrite(ledPin3,LOW);     
  digitalWrite(ledPin4,LOW);     
  digitalWrite(ledPin5,LOW);      
  digitalWrite(ledPin6,LOW);      
  digitalWrite(ledPin7,LOW);   
   }   
   //bij minder dan 146 alleen led1 aan
   else if(potMeasure < 146){    
     digitalWrite(ledPin1,HIGH);     
     digitalWrite(ledPin2,LOW);     
     digitalWrite(ledPin3,LOW);     
     digitalWrite(ledPin4,LOW);     
     digitalWrite(ledPin5,LOW);      
     digitalWrite(ledPin6,LOW);      
     digitalWrite(ledPin7,LOW);
     //bij minder dan 146 led1 en 2 aan
}else if(potMeasure < 292){
  digitalWrite(ledPin1,HIGH);     
     digitalWrite(ledPin2,HIGH);     
     digitalWrite(ledPin3,LOW);     
     digitalWrite(ledPin4,LOW);     
     digitalWrite(ledPin5,LOW);      
     digitalWrite(ledPin6,LOW);      
     digitalWrite(ledPin7,LOW);
          //bij minder dan 146 led1, 2 en 3 aan
}else if(potMeasure < 438){
  digitalWrite(ledPin1,HIGH);     
     digitalWrite(ledPin2,HIGH);     
     digitalWrite(ledPin3,HIGH);     
     digitalWrite(ledPin4,LOW);     
     digitalWrite(ledPin5,LOW);      
     digitalWrite(ledPin6,LOW);      
     digitalWrite(ledPin7,LOW);
          //bij minder dan 146 led1, 2, 3 en 4 aan
}else if(potMeasure < 584){
  digitalWrite(ledPin1,HIGH);     
     digitalWrite(ledPin2,HIGH);     
     digitalWrite(ledPin3,HIGH);     
     digitalWrite(ledPin4,HIGH);     
     digitalWrite(ledPin5,LOW);      
     digitalWrite(ledPin6,LOW);      
     digitalWrite(ledPin7,LOW);
               //bij minder dan 146 led1, 2, 3, 4 en 5 aan
}else if(potMeasure < 730){
  digitalWrite(ledPin1,HIGH);     
     digitalWrite(ledPin2,HIGH);     
     digitalWrite(ledPin3,HIGH);     
     digitalWrite(ledPin4,HIGH);     
     digitalWrite(ledPin5,HIGH);      
     digitalWrite(ledPin6,LOW);      
     digitalWrite(ledPin7,LOW);
               //bij minder dan 146 led1, 2, 3, 4, 5 en 6 aan
}else if(potMeasure < 876){
  digitalWrite(ledPin1,HIGH);     
     digitalWrite(ledPin2,HIGH);     
     digitalWrite(ledPin3,HIGH);     
     digitalWrite(ledPin4,HIGH);     
     digitalWrite(ledPin5,HIGH);      
     digitalWrite(ledPin6,HIGH);      
     digitalWrite(ledPin7,LOW);
                    //bij minder dan 146 led1, 2, 3, 4, 5, 6 en 7 aan
}else if(potMeasure < 1022){
  digitalWrite(ledPin1,HIGH);     
     digitalWrite(ledPin2,HIGH);     
     digitalWrite(ledPin3,HIGH);     
     digitalWrite(ledPin4,HIGH);     
     digitalWrite(ledPin5,HIGH);      
     digitalWrite(ledPin6,HIGH);      
     digitalWrite(ledPin7,HIGH);
}
}

//bronnen
//ik heb hulp gehad van Jakub met het opstellen van de code 