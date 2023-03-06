//traffic light one
int RED = 1;
int YELLOW = 2;
int GREEN = 4;
int Button = 3;
//traffic light two
int red = 5;
int yellow = 7;
int green = 9;
//int Button = 12;//

             //TRAFFIC LIGHT ONE
void setup() { pinMode(RED,OUTPUT);
               pinMode(YELLOW,OUTPUT);
               pinMode(GREEN,OUTPUT);
               pinMode(Button,INPUT_PULLUP);
              
              //TRAFFIC LIGHT TWO
               pinMode(red,OUTPUT);
               pinMode(yellow,OUTPUT);
               pinMode(green,OUTPUT);
              // pinMode(Button,INPUT_PULLUP)
              
             }
            
                


void loop(){
  
               if(digitalRead(Button)==LOW)
                    {
                        digitalWrite(RED,HIGH);
                        delay(6000);
                        digitalWrite(RED,LOW);
                    }
               else
                      {   
                        digitalWrite(RED,HIGH);
                        digitalWrite(yellow,LOW);
                        digitalWrite(red,LOW);
                        digitalWrite(green,HIGH);
                        delay(4000);
                        digitalWrite(YELLOW,HIGH);
                        digitalWrite(yellow,HIGH);                       
                        digitalWrite(green,LOW); 
                        delay(2000);
                        digitalWrite(GREEN,HIGH);
                        digitalWrite(YELLOW,LOW);
                        digitalWrite(RED,LOW);
                        digitalWrite(yellow,LOW);
                        digitalWrite(red,HIGH);
                        delay(4000);
                        digitalWrite(GREEN,LOW);
                        digitalWrite(YELLOW,HIGH);
                        digitalWrite(yellow,HIGH);
                        delay(2000);
                        
                          }
                       
                      
                      }
