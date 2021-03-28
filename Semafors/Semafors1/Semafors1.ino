
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
unsigned long ARon=0;                             //TON de semafor A RED
int ARtimon=11000;                                //Temps que Led RED semafor A esta en ON
int ARtimoff=9000;                                //Temps que Led RED semafor A esta en OF
unsigned long AOon=10;                            //TON de semagor A ORANGE
unsigned long AGon=10;                            //TON de semafor A GREEN
unsigned long BRon=0;                             //TON de semafor B RED
unsigned long BOon=0;                             //TON de semafor B ORANGE
unsigned long BGon=0;                             //TON de semafor B GREEN

int sortides=9;                                   //sortides en vinari

//********** Setup ****************************************************************
void setup() {
  Serial.begin(9600);                              //definir velocitat
  for(int i = 0; i < ledNum; i++)                  // definir els pins 7,8,9,10,11 i 12 com sortides
  {
  pinMode(ledPin[i], OUTPUT);
  }
  for(int j = 0; j < ledNum ; j++)                 // posar Leds a 0
  {
  digitalWrite(ledPin[j], 0);
  }
}

//********** Loop *****************************************************************
void loop() {
  
  
}
