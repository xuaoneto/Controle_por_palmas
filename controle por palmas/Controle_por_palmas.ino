#define pinled1 LED_BUILTIN
#define entradasom 11

void setup() {
   pinMode( pinled1 , OUTPUT);
   pinMode(entradasom , INPUT);
}

void loop() {
  int t = digitalRead(entradasom);
  
  if (t == 1){
    
    int p = false; 
    delay(150);
    int timer = millis()+1500;
  
    while(timer > millis()){
      int t = digitalRead(entradasom);
      if (t == 1){ 
        p = true;
      }
    }
    
    if (p == false){
      digitalWrite(pinled1,HIGH);
    }
    if (p == true){
      digitalWrite(pinled1,LOW);
    }
  }
}

  
