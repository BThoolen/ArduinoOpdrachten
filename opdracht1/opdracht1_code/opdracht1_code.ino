//snelheid van de loop
int timer = 100;   

void setup() {
  //elke led doorgeven op welke digital output pin deze zit
  for (int thisPin = 1; thisPin < 9; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {

  //loop van led 1 naar led 8

  for (int thisPin = 1; thisPin < 9; thisPin++) {

    // ledpins aanzetten
    digitalWrite(thisPin, HIGH);

    delay(timer);

    // ledspins uitzetten
    digitalWrite(thisPin, LOW);

  }

  // loop van led 8 naar led 1
  for (int thisPin = 8; thisPin >= 1; thisPin--) {

    // ledpins aanzetten
    digitalWrite(thisPin, HIGH);

    delay(timer);

    // ledpins uitzetten
    digitalWrite(thisPin, LOW);
  }
}
//bronnen
//https://docs.arduino.cc/built-in-examples/control-structures/ForLoopIteration