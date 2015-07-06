
int DIGTAL_PIN = 2;

void setup()
{
  pinMode(DIGTAL_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(DIGTAL_PIN, HIGH);
  delay(analogRead(0));
  digitalWrite(DIGTAL_PIN, LOW);
  delay(analogRead(0));
  Serial.println("home");
}
