//test led tricolore
const int RED = 30;
const int GREEN = 40;
const int BLUE = 39;

int FADE = 0;


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
 
  //oblige la variable FADE a etre entre 0 et 255 
  FADE = constrain (FADE,0,255);
  
  // fonctionne 15 sec puis stop
  while(millis()<15000)
  {
    // 3 couleurs primaires s'allumes l'une pour finir en blanc puis s'eteignet l'une apres l'autre
  digitalWrite(RED, HIGH);   
  delay(100); 
    digitalWrite(BLUE, HIGH);   
  delay(100);  
    digitalWrite(GREEN, HIGH);   
  delay(100);    


  digitalWrite(RED, LOW);   
  delay(100); 
    digitalWrite(BLUE, LOW);   
  delay(100);  
    digitalWrite(GREEN, LOW);   
  delay(100);    

// 2 blink en blanc
    digitalWrite(RED, HIGH);   

    digitalWrite(BLUE, HIGH);   

    digitalWrite(GREEN, HIGH);   
  delay(100);    

      digitalWrite(RED, LOW);   

    digitalWrite(BLUE, LOW);   

    digitalWrite(GREEN, LOW);   
  delay(100);    

      digitalWrite(RED, HIGH);   

    digitalWrite(BLUE, HIGH);   

    digitalWrite(GREEN, HIGH);   
  delay(100);    

      digitalWrite(RED, LOW);   

    digitalWrite(BLUE, LOW);   

    digitalWrite(GREEN, LOW);   
  delay(100);    
  
  

  // fade led red -> fade-1 blue ->fade green
 FADE = 0;
  while (FADE<255)
  {
    FADE = max(FADE,0);
    
    FADE =abs( FADE+1);
    analogWrite (RED,FADE);
    delay(10);
    }
    
   digitalWrite(RED,LOW);
    
   while (FADE > 0)
  {
    FADE= max(FADE,255);
    
    FADE =abs( FADE-1);
    analogWrite (BLUE,FADE);
    delay(10);
    } 
    
    while (FADE < 255)
  {
    FADE= max(FADE,0);
    FADE =abs( FADE+1);
    analogWrite (GREEN,FADE);
    delay(10);
    } 
    
   digitalWrite(GREEN,LOW);
   FADE = 0;
  }
    
}
