/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Variables ************************************************************
const int ledPin[] = {4,5,6,7,8,9,10,11,12};     // donar nom en un array als pins 4,5,6,7,8,9,10,11 i 12 columnes
int ledNum = 9;                                  // definir variable de número de columna
int temps=500;                                   // temps pels delays
const int TPin[] = {24,25,26};                   // donar nom en un array als pins 24,25 i 26 pisos
int TrNum=3;                                     // definir numero de pisos

//********** Setup ****************************************************************

void setup() {
  for(int i = 0; i < ledNum; i++)                // definir els pins 4,5,6,7,8,9,10,11 i 12 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  for(int j = 0; j < TrNum; j++)                 // definir els pins 24,25 i 26 com sortides
  {
    pinMode(TPin[j], OUTPUT);
  }
  for(int h = 0; h < ledNum ; h++)                // apagada de columnes
    { 
    digitalWrite(ledPin[h], 0);
    }
    for(int k = 0; k < TrNum ; k++)               // apagada de transistors
    { 
    digitalWrite(TPin[k], 0);
    }

}
//********** Loop *****************************************************************

void loop() {
  for(int l = 0; l < ledNum ; l++)                 // actualitzar estat columnes
    { 
      digitalWrite(ledPin[l], 1);
      digitalWrite(ledPin[l-1], 0);
      delay(temps);
    }
  

}
