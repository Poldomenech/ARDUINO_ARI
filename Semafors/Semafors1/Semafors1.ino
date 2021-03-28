
/**********************************************************************************
**                                                                               **
**                                 Semafors                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int ledPin[]={7,8,9,10,11,12};              //definir noms pels pins de sortida
int ledNum=6;                                     //definir variable de numero de Leds
unsigned long AR;                                 //dada per millis
int sortides=9;                                   //sortides en vinari

//********** Setup ****************************************************************
void setup() {
  Serial.begin(9600);                                 //definir velocitat
  for(int i = 0; i < ledNum; i++)                     // definir els pins 7,8,9,10,11 i 12 com sortides
  {
  pinMode(ledPin[i], OUTPUT);
  }
  for(int j = 0; j < ledNum ; j++)                    // posar Leds a 0
  {
  digitalWrite(ledPin[j], 0);
  }
}

//********** Loop *****************************************************************
void loop() {
  for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(sortides, j));
    }
  
}
