//**********************************************************************************
//**                                                                               **
//**                              Array de 8 LEDs                                  **
//**                                                                               **
//**                                                                               **
//**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[] = {4,5, 6, 7, 8,9,10,11,12};   // donar nom en un array als pins 5, 6, 7, 8,9,10,11 i 12
const int firstPin = 2;                         // donar nom al pin 2 de l’Arduino
boolean first = LOW;                             // definir variable d'estat pel polsador
const int followPin=3;                          // donar nom al pin 3 de l'Arduino
boolean follow= LOW;                            // definir variable d'estat del polsador

int ledNum = 9;                                 // definir variable de número de leds
int num = 0;                                    // definir variable del número a mostrar 
 
//********** Setup ****************************************************************
void setup()
{
   Serial.begin(9600);
  for(int i = 0; i < ledNum; i++)              // definir els pins 5, 6, 7,8,9,10,11 i 12 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(firstPin, INPUT);                     // definir el pin 2 com una entrada
  pinMode(followPin, INPUT);                    // definir el pin 3 com a entrada
  for(int j = 0; j < ledNum ; j++)              // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
}

//********** Loop *****************************************************************
void loop()
{
  first=digitalRead(firstPin);
  
}

//********** Funcions *************************************************************

void llums(){
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
