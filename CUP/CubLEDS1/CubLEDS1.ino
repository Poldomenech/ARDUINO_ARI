//**********************************************************************************
//**                                                                              **
//**                              CUP                                             **
//**                                                                              **
//**                                                                              **
//**********************************************************************************
//********** Variables ************************************************************
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
 Serial.println(Pis);
}
//********** Loop *****************************************************************

void loop() {
 
     
  for (int i=1;i<TrNum+1;i++){                        // actualitzar estat de pis
    for(int l = 1; l < ledNum+1 ; l++){               // actualitzar estat columnes
  
      digitalWrite(ledPin[l-1],HIGH);
      digitalWrite(ledPin[l],LOW);
      digitalWrite(TPin[i-1],LOW);
      digitalWrite(TPin[i],HIGH);
      delay(temps); 
    }
  }
   
  }
