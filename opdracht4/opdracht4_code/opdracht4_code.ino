float temperatuur;
int temperatuurPin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //temperatuur analoog sensor uitlezen en opslaan in temperatuur
  temperatuur = analogRead(temperatuurPin);
  //omzetten waarde van temperatuur naar celsius
  temperatuur = temperatuur * 0.48828125;

  //in de serial monitor tonen van de temperatuur 
  Serial.print("Temperatuur in Celsius = ");
  Serial.print(temperatuur);
  Serial.println();
  //snelheid instellen
  delay(1000);
}