//**********************************************************************************
//**                                                                              **
//**                              CUP                                             **
//**                                                                              **
//**                                                                              **
//**********************************************************************************
//********** Variables ************************************************************
#define ARRAY_SIZE(array) ((sizeof(array))/(sizeof(int)))    //PER UTILITZAR LA POSICIÓ DE LES VARIABLES
const int ledPin[] = {4,5,6,7,8,9,10,11,12};     // donar nom en un array als pins 4,5,6,7,8,9,10,11 i 12 columnes
int ledNum = 9;                                  // definir variable de número de columna
int temps=500;                                   // temps pels delays
const int TPin[] = {24,25,26};                   // donar nom en un array als pins 24,25 i 26 pisos
int TrNum=3;                                     // definir numero de pisos
int Pis=0;                                       // definir primer pis engegat

//********** Setup ****************************************************************

void setup() {
  Serial.begin(9600);
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
    digitalWrite(ledPin[h],LOW);
    }
    for(int k = 0; k < TrNum ; k++)               // apagada de transistors
    { 
    digitalWrite(TPin[k],LOW);
    }
 
}
//********** Loop *****************************************************************
void loop() 
{
  switch(Pis)
  {
    case 0:
    digitalWrite(24,HIGH);
    digitalWrite(25,LOW);
    digitalWrite(26,LOW);
    dance();
    Pis=Pis+1;
    break;

    case 1:
    digitalWrite(25,HIGH);
    digitalWrite(24,LOW);
    digitalWrite(26,LOW);
    dance();
    Pis=Pis+1;
    break;

    case 2:
    digitalWrite(26,HIGH);
    digitalWrite(25,LOW);
    digitalWrite(24,LOW);
    dance();
    Pis=0;
    break;

  } 
}
//********** voids *****************************************************************
void dance()
 {
      for(int l = 0; l < ARRAY_SIZE(ledPin); l++){               // actualitzar estat columnes
  
      digitalWrite(ledPin[l],HIGH);      
      delay(temps); 
      digitalWrite(ledPin[l],LOW);
 }
}
