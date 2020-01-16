//****************************************
//Program by: Alexander Moussa
//Editors: Natasha White, Christine Laporte
//School: Samuel Genest
//*****************************************
//requires keypad.h zip in same file
#include <Keypad.h>

//pins relie aux LED
int bluePin1 = 52;
int redPin1 = 53;
int bluePin2 = 50;
int redPin2 = 51;
int bluePin3 = 48;
int redPin3 = 49;
int bluePin4 = 46;
int redPin4 = 47;
int bluePin5 = 44;
int redPin5 = 45;
int bluePin6 = 42;
int redPin6 = 43;
int bluePin7 = 40;
int redPin7 = 41;
int bluePin8 = 38;
int redPin8 = 39;
int bluePin9 = 36;
int redPin9 = 37;

int count = 0;
int r1 = 0;
int b1 = 0;

//variable pour changer de joueur (1 et 2 selon le joueur)
int playerState = 1;

//creation du keypad
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'#','0','*'}
};
// **************** Doit changer les # de pins ****************
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad
  
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
  
  
void setup(){
 pinMode(bluePin1, OUTPUT);
 pinMode(redPin1, OUTPUT);
 pinMode(bluePin2, OUTPUT);
 pinMode(redPin2, OUTPUT);
 pinMode(bluePin3, OUTPUT);
 pinMode(redPin3, OUTPUT);
 pinMode(bluePin4, OUTPUT);
 pinMode(redPin4, OUTPUT);
 pinMode(bluePin5, OUTPUT);
 pinMode(redPin5, OUTPUT);
 pinMode(bluePin6, OUTPUT);
 pinMode(redPin6, OUTPUT);
 pinMode(bluePin7, OUTPUT);
 pinMode(redPin7, OUTPUT);
 pinMode(bluePin8, OUTPUT);
 pinMode(redPin8, OUTPUT);
 pinMode(bluePin9, OUTPUT);
 pinMode(redPin9, OUTPUT);
 
 
 /*digitalWrite(bluePin1, LOW);
 digitalWrite(redPin1, LOW);
 digitalWrite(bluePin2, LOW);
 digitalWrite(redPin2, LOW);
 digitalWrite(bluePin3, LOW);
 digitalWrite(redPin3, LOW);
 digitalWrite(bluePin4, LOW);
 digitalWrite(redPin4, LOW);
 digitalWrite(bluePin5, LOW);
 digitalWrite(redPin5, LOW);
 digitalWrite(bluePin6, LOW);
 digitalWrite(redPin6, LOW);
 digitalWrite(bluePin7, LOW);
 digitalWrite(redPin7, LOW);
 digitalWrite(bluePin8, LOW);
 digitalWrite(redPin8, LOW);
 digitalWrite(bluePin9, LOW);
 digitalWrite(redPin9, LOW);
 */
 Serial.begin(9600);
 
 
}
  
  
  
void loop(){
  

  
  char key = keypad.getKey();
  
  if (key != NO_KEY){
    Serial.println("No key");     
  }
    
  if(key){
    //execute une action selon le bouton peser

    switch (key){
      case '1':
        if (playerState==1 && digitalRead(redPin1) == LOW){
          digitalWrite(bluePin1, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin1) == LOW){
          digitalWrite (redPin1, HIGH);
          playerState = 1;
        }
        break;
        
      case '2':
        if (playerState==1 && digitalRead(redPin2) == LOW){
          digitalWrite(bluePin2, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin2) == LOW){
          digitalWrite (redPin2, HIGH);
          playerState = 1;
        }
        break;
        
      case '3':
        if (playerState==1 && digitalRead(redPin3) == LOW){
          digitalWrite(bluePin3, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin3) == LOW){
          digitalWrite (redPin3, HIGH);
          playerState = 1;
        }
        break;
        
      case '4':
        if (playerState==1 && digitalRead(redPin4) == LOW){
          digitalWrite(bluePin4, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin4) == LOW){
          digitalWrite (redPin4, HIGH);
          playerState = 1;
        }
        break;
        
      case '5':
        if (playerState==1 && digitalRead(redPin5) == LOW){
          digitalWrite(bluePin5, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin5) == LOW){
          digitalWrite (redPin5, HIGH);
          playerState = 1;
        }
        break;
        
      case '6':
        if (playerState==1 && digitalRead(redPin6) == LOW) {
          digitalWrite(bluePin6, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin6) == LOW){
          digitalWrite (redPin6, HIGH);
          playerState = 1;
        }
        break;
        
      case '7':
        if (playerState==1 && digitalRead(redPin7) == LOW){
          digitalWrite(bluePin7, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin7) == LOW){
          digitalWrite (redPin7, HIGH);
          playerState = 1;
        }
        break;
        
      case '8':
        if (playerState==1 && digitalRead(redPin8) == LOW){
          digitalWrite(bluePin8, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin8) == LOW){
          digitalWrite (redPin8, HIGH);
          playerState = 1;
        }
        break;
        
      case '9':
        if (playerState==1 && digitalRead(redPin9) == LOW){
          digitalWrite(bluePin9, HIGH);
          playerState = 2;
        }
        if(playerState==2 && digitalRead(bluePin9) == LOW){
          digitalWrite (redPin9, HIGH);
          playerState = 1;
        }
        break;
        
      
      //reset du jeu  
      case '0':
      {
        digitalWrite(bluePin1, LOW);
        digitalWrite(redPin1, LOW);
        digitalWrite(bluePin2, LOW);
        digitalWrite(redPin2, LOW);
        digitalWrite(bluePin3, LOW);
        digitalWrite(redPin3, LOW);
        digitalWrite(bluePin4, LOW);
        digitalWrite(redPin4, LOW);
        digitalWrite(bluePin5, LOW);
        digitalWrite(redPin5, LOW);
        digitalWrite(bluePin6, LOW);
        digitalWrite(redPin6, LOW);
        digitalWrite(bluePin7, LOW);
        digitalWrite(redPin7, LOW);
        digitalWrite(bluePin8, LOW);
        digitalWrite(redPin8, LOW);
        digitalWrite(bluePin9, LOW);
        digitalWrite(redPin9, LOW);
        playerState = 2; //pcq on va changer de joueur apres donc commencer avec 1
        }
        break;
    }
    


    
    //changer de joueur    
    /*if(playerState == 1){
       playerState = 2; 
    }
    else{
       playerState = 1; 
    }*/
  } 
  

  
  
  
  if  (digitalRead(redPin1) == HIGH && digitalRead(redPin4) == HIGH && digitalRead(redPin7) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin1, LOW); 
      digitalWrite(redPin4, LOW); 
      digitalWrite(redPin7, LOW); 
      delay(500); 
      digitalWrite(redPin1, HIGH);  
      digitalWrite(redPin4, HIGH);
      digitalWrite(redPin7, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
  if  (digitalRead(bluePin1) == HIGH && digitalRead(bluePin4) == HIGH && digitalRead(bluePin7) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin1, LOW); 
      digitalWrite(bluePin4, LOW); 
      digitalWrite(bluePin7, LOW); 
      delay(500); 
      digitalWrite(bluePin1, HIGH);  
      digitalWrite(bluePin4, HIGH);
      digitalWrite(bluePin7, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
if  (digitalRead(redPin2) == HIGH && digitalRead(redPin5) == HIGH && digitalRead(redPin8) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin2, LOW); 
      digitalWrite(redPin5, LOW); 
      digitalWrite(redPin8, LOW); 
      delay(500); 
      digitalWrite(redPin2, HIGH);  
      digitalWrite(redPin5, HIGH);
      digitalWrite(redPin8, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
             
   }
  if  (digitalRead(bluePin2) == HIGH && digitalRead(bluePin5) == HIGH && digitalRead(bluePin8) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin2, LOW); 
      digitalWrite(bluePin5, LOW); 
      digitalWrite(bluePin8, LOW); 
      delay(500); 
      digitalWrite(bluePin2, HIGH);  
      digitalWrite(bluePin5, HIGH);
      digitalWrite(bluePin8, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
if  (digitalRead(redPin3) == HIGH && digitalRead(redPin6) == HIGH && digitalRead(redPin9) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin3, LOW); 
      digitalWrite(redPin6, LOW); 
      digitalWrite(redPin9, LOW); 
      delay(500); 
      digitalWrite(redPin3, HIGH);  
      digitalWrite(redPin6, HIGH);
      digitalWrite(redPin9, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
  if  (digitalRead(bluePin3) == HIGH && digitalRead(bluePin6) == HIGH && digitalRead(bluePin9) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin3, LOW); 
      digitalWrite(bluePin6, LOW); 
      digitalWrite(bluePin9, LOW); 
      delay(500); 
      digitalWrite(bluePin3, HIGH);  
      digitalWrite(bluePin6, HIGH);
      digitalWrite(bluePin9, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
if  (digitalRead(redPin1) == HIGH && digitalRead(redPin2) == HIGH && digitalRead(redPin3) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin1, LOW); 
      digitalWrite(redPin2, LOW); 
      digitalWrite(redPin3, LOW); 
      delay(500); 
      digitalWrite(redPin1, HIGH);  
      digitalWrite(redPin2, HIGH);
      digitalWrite(redPin3, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
  if  (digitalRead(bluePin1) == HIGH && digitalRead(bluePin2) == HIGH && digitalRead(bluePin3) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin1, LOW); 
      digitalWrite(bluePin2, LOW); 
      digitalWrite(bluePin3, LOW); 
      delay(500); 
      digitalWrite(bluePin1, HIGH);  
      digitalWrite(bluePin2, HIGH);
      digitalWrite(bluePin3, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
if  (digitalRead(redPin4) == HIGH && digitalRead(redPin5) == HIGH && digitalRead(redPin6) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin4, LOW); 
      digitalWrite(redPin5, LOW); 
      digitalWrite(redPin6, LOW); 
      delay(500); 
      digitalWrite(redPin4, HIGH);  
      digitalWrite(redPin5, HIGH);
      digitalWrite(redPin6, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
  if  (digitalRead(bluePin4) == HIGH && digitalRead(bluePin5) == HIGH && digitalRead(bluePin6) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin4, LOW); 
      digitalWrite(bluePin5, LOW); 
      digitalWrite(bluePin6, LOW); 
      delay(500); 
      digitalWrite(bluePin4, HIGH);  
      digitalWrite(bluePin5, HIGH);
      digitalWrite(bluePin6, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
if  (digitalRead(redPin7) == HIGH && digitalRead(redPin8) == HIGH && digitalRead(redPin9) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin7, LOW); 
      digitalWrite(redPin8, LOW); 
      digitalWrite(redPin9, LOW); 
      delay(500); 
      digitalWrite(redPin7, HIGH);  
      digitalWrite(redPin8, HIGH);
      digitalWrite(redPin9, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
  if  (digitalRead(bluePin7) == HIGH && digitalRead(bluePin8) == HIGH && digitalRead(bluePin9) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin7, LOW); 
      digitalWrite(bluePin8, LOW); 
      digitalWrite(bluePin9, LOW); 
      delay(500); 
      digitalWrite(bluePin7, HIGH);  
      digitalWrite(bluePin8, HIGH);
      digitalWrite(bluePin9, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
if  (digitalRead(redPin1) == HIGH && digitalRead(redPin5) == HIGH && digitalRead(redPin9) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin1, LOW); 
      digitalWrite(redPin5, LOW); 
      digitalWrite(redPin9, LOW); 
      delay(500); 
      digitalWrite(redPin1, HIGH);  
      digitalWrite(redPin5, HIGH);
      digitalWrite(redPin9, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
  if  (digitalRead(bluePin1) == HIGH && digitalRead(bluePin5) == HIGH && digitalRead(bluePin9) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin1, LOW); 
      digitalWrite(bluePin5, LOW); 
      digitalWrite(bluePin9, LOW); 
      delay(500); 
      digitalWrite(bluePin1, HIGH);  
      digitalWrite(bluePin5, HIGH);
      digitalWrite(bluePin9, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
if  (digitalRead(redPin3) == HIGH && digitalRead(redPin5) == HIGH && digitalRead(redPin7) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(redPin3, LOW); 
      digitalWrite(redPin5, LOW); 
      digitalWrite(redPin7, LOW); 
      delay(500); 
      digitalWrite(redPin3, HIGH);  
      digitalWrite(redPin5, HIGH);
      digitalWrite(redPin7, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
     if  (digitalRead(bluePin3) == HIGH && digitalRead(bluePin5) == HIGH && digitalRead(bluePin7) == HIGH){
   while (count != 5){
      delay(500);
      digitalWrite(bluePin3, LOW); 
      digitalWrite(bluePin5, LOW); 
      digitalWrite(bluePin7, LOW); 
      delay(500); 
      digitalWrite(bluePin3, HIGH);  
      digitalWrite(bluePin5, HIGH);
      digitalWrite(bluePin7, HIGH);
    count++;
    
    }  
    digitalWrite(bluePin1, LOW);
    digitalWrite(redPin1, LOW);
    digitalWrite(bluePin2, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(bluePin3, LOW);
    digitalWrite(redPin3, LOW);
    digitalWrite(bluePin4, LOW);
    digitalWrite(redPin4, LOW);
    digitalWrite(bluePin5, LOW);
    digitalWrite(redPin5, LOW);
    digitalWrite(bluePin6, LOW);
    digitalWrite(redPin6, LOW);
    digitalWrite(bluePin7, LOW);
    digitalWrite(redPin7, LOW);
    digitalWrite(bluePin8, LOW);
    digitalWrite(redPin8, LOW);
    digitalWrite(bluePin9, LOW);
    digitalWrite(redPin9, LOW);
    playerState = 1; //pcq on va changer de joueur apres donc commencer avec 1  
    count = 0;     
              
   }
    
}

