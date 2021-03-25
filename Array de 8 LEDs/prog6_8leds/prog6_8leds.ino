/**********************************************************************************
**                                                                               **
**                          combinacio de programes                              **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************

const int B1Pin = 2;     // donar nom al pin 2 de l’Arduino
int B1State = 0;         // per guardar l’estat en que és troba el button 1
const int B2Pin =3;      //donar nom al pin 3 de l'Arduino
int B2State = 0;         //per guardar estat en que es troba el boto 2
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
const unsigned long t=200;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(B1Pin, INPUT);     // definir el pin 2 com una entrada 
  pinMode(B2Pin, INPUT);     //definir pin 3 com una entrada 
}
//********** Loop *****************************************************************
void loop()
{
        B1State = digitalRead(B1Pin);  //llegir l’estat del button 1 i gardar-lo
        B2State =digitalRead(B2Pin);   //llegir l'estat del boto 2
        
  if (B1State == 1&&B2State==0)       //programa1_8leds
  {
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5      
  digitalWrite(led1, 1);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, 1);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, 1);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, 0);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, 0);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, 0);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, 0 );     // posar a 0V el pin 12.
  
  delay(500);                  // es queden leds 500ms apagats         
        }
          else if(B1State==0&&B2State==1)    //programa2_8leds     
          {
  digitalWrite(led0, 1);    // posar a 5V el pin 5            
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 1);    // posar a 0V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 1);    // posar a 0V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 1);    // posar a 0V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1, 1);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 1);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 1);    // posar a 0V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12  
             
  delay(500);                 
          }
          else          //programa3_8leds, tant si no s'apreta cap boto com si s'apreten els dos
          {
            digitalWrite(led0, 1);    // posar a 5V el pin 5
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 0);    // posar a 0V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
  delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 1);    // posar a 5V el pin 5
  digitalWrite(led1, 1);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 1);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
                   
  delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 0);    // posar a 0V el pin 5
  digitalWrite(led1, 1);    // posar a 5V el pin 6
  digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 1);    // posar a 5V el pin 10
  digitalWrite(led6, 1);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 0V el pin 12

  delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 0);    // posar a 0V el pin 5
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 1);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5, 1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 0V el pin 11
  digitalWrite(led7, 0);    // posar a 0V el pin 12

  delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 0);    // posar a 0V el pin 5
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 1);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 0);    // posar a 0V el pin 11
  digitalWrite(led7, 0);    // posar a 0V el pin 12

    delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 0);    // posar a 0V el pin 5
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 1);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 0);    // posar a 0V el pin 11
  digitalWrite(led7, 0);    // posar a 0V el pin 12

    delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 0);    // posar a 0V el pin 5
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 1);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5, 1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 0V el pin 11
  digitalWrite(led7, 0);    // posar a 0V el pin 12

    delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 0);    // posar a 0V el pin 5
  digitalWrite(led1, 1);    // posar a 5V el pin 6
  digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 1);    // posar a 5V el pin 10
  digitalWrite(led6, 1);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 0V el pin 12

    delay(t);                  // es queden leds 500ms encesos
  digitalWrite(led0, 1);    // posar a 5V el pin 5
  digitalWrite(led1, 1);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 1);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
  delay(t);
   digitalWrite(led0, 1);    // posar a 5V el pin 5
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 0);    // posar a 0V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12

   delay(t);
   digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1, 0);    // posar a 0V el pin 6
  digitalWrite(led2, 0);    // posar a 0V el pin 7
  digitalWrite(led3, 0);    // posar a 0V el pin 8
  digitalWrite(led4, 0);    // posar a 0V el pin 9
  digitalWrite(led5, 0);    // posar a 0V el pin 10
  digitalWrite(led6, 0);    // posar a 0V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  delay(500);
          }
          delay(200);  //per no estar llegint button molt ràpid
        }
//********** Funcions *************************************************************
