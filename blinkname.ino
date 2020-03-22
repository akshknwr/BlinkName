//blinking morse code of my first name i.e. Akash

int led1 = D6; // Defining first LED
int led2 = D7; // Second LED light


//setting up pins and modes.
void setup() {

  

  pinMode(led1, OUTPUT); // setting led1 as output
  pinMode(led2, OUTPUT); //setting led2 as output
  
   

}

// now in loop function we want it to continuely blinking my name in MORSE code.

void loop() {
    blink(200); blink(500); //A
    delay(300); //to make sure both letters are not blinking together so defining some delay before flashing next letter
    blink(500); blink(200); blink(500); //K
    delay(300);
     blink(200); blink(500); //A
     delay(300);
     blink(200); blink(200); blink(200); //S
     delay(300);
     blink(200); blink(200); blink(200);blink(200); //H
     delay(1000);
    
 

  // And repeat!
}
void blink(int duration){
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
  delay(duration);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(duration);
    
}