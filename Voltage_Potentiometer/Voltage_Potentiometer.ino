#define POTENTIO PE_3

void setup() {
  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  int sensorValue = analogRead(POTENTIO);//pin à éventuellement changer
  
  float voltage = sensorValue * (3.3 / 4096);
  
  Serial.println(voltage);
}
