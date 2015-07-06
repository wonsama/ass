int LED = 13;
int SOUND_SENSOR = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SOUND_SENSOR, INPUT); 
  pinMode(LED, OUTPUT); 
}

void loop() {
  int sensorValue = analogRead(SOUND_SENSOR);//use A0 to read the electrical signal
  Serial.print("sensorValue : ");
  Serial.println(sensorValue);
  if( sensorValue > 650 ){
    digitalWrite(LED, HIGH);
    delay(200);
  }
  digitalWrite(LED, LOW);
  
}
