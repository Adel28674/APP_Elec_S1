#include <Wire.h>  // Inclure la bibliothèque pour la communication série
#define RX_PIN 2    // Définir la broche de réception (RX)
#define TX_PIN 3    // Définir la broche de transmission (TX)

void setup() {
  // Initialiser la communication série (vitesse en bauds 9600)
  Serial.begin(9600);
  
  // Initialiser la communication série sur Serial1 (vitesse en bauds 9600)
  Serial1.begin(9600);
}

void loop() {
  // Envoyer un message via Serial1 (Bluetooth)
  Serial1.print("Bonjour depuis Tiva via Bluetooth!");

  // Attendre un peu avant d'envoyer un autre message
  delay(1000);
}
