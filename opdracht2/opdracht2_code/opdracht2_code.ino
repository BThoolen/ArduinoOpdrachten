//definieren button pin en led pin
const int buttonPin = 10;
const int ledPin    = 11;

// variables will change:
int ledState = LOW;     // variabele eerste status van led op LOW
int lastButtonState;    // variabele voor laatste button status
int currentButtonState; // variabele voor status nu van button

void setup() {
  Serial.begin(9600);                // serial initialiseren
  pinMode(buttonPin, INPUT_PULLUP); // buttonpin op pullup zetten
  pinMode(ledPin, OUTPUT);          // ledpin op output zetten

  currentButtonState = digitalRead(buttonPin);
}

void loop() {
  lastButtonState    = currentButtonState;      // laatste status opslaan
  currentButtonState = digitalRead(buttonPin); // nieuwe status lezen

  if(lastButtonState == HIGH && currentButtonState == LOW) {
   
    // status van de led veranderen bij button button low of high
    ledState = !ledState;
    digitalWrite(ledPin, ledState); 
  }
}
//bronnen
//https://arduinogetstarted.com/tutorials/arduino-button-toggle-led
