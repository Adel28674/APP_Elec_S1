#define PUSH_BUTTON PC_6

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(PUSH_BUTTON, INPUT);
  
} 
void loop( )
{
  int buttonState = digitalRead(PUSH_BUTTON);
  Serial.print(buttonState);
  if(buttonState == HIGH){
    Serial.print("    Je suis à l'heure\n");
    delay(1000);
  }
  else{
    Serial.print("    Je suis pressé\n");
    delay(1000);
  }

}
