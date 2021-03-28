
/**********************************************************************************
**                                                                               **
**                                 Semafors                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int ledPin[]={7,8,9,10,11,12};               //definir noms pels pins de sortida
int ledNum=6;                                      //definir variable de numero de Leds
unsigned long currentmillis=0;                     //sincro amb millis()
unsigned long t1=1000;                             //zona temporal 1
unsigned long t2=5000;                             //zona temporal 2
unsigned long t3=10000;                            //zona temporal 3
unsigned long t4=11000;                            //zona temporal 4
unsigned long t5=15000;                            //zona temporal 5
unsigned long t6=20000;                            //zona temporal 6
unsigned long t7=21000;                            //zona temporal 7
const int BAPin=2;                                 //definir nom per Pin 2 Arduino (peatons semafor A)
const int BBPin=3;                                 //definir nom per Pin 3 Arduino (peatons semafor B)
int BAState=0;                                     //per guardar estat del boto peatons semafor A
int BBState=0;                                     //per guardar estat del boto peatons semafor B

//********** Setup ****************************************************************
void setup() {
  Serial.begin(9600);                               //definir velocitat
  for(int i = 0; i < ledNum; i++){                  // definir els pins 7,8,9,10,11 i 12 com sortides
  
  pinMode(ledPin[i], OUTPUT);
  }
  for(int j = 0; j < ledNum ; j++){                 // posar Leds a 0
  
  digitalWrite(ledPin[j], 0);
  }
  pinMode(BAPin,INPUT);                             //definir pin 2 com a entrada
  pinMode(BBPin, INPUT);                           //definir pin 3 com a entrada
}

//********** Loop *****************************************************************
void loop() {
BAState=digitalRead(BAPin);                                                         //actualitza estat del boto peatons semafor A
BBState=digitalRead(BBPin);                                                         //actualitza estat del boto peatons semafor B
  
if (millis()-currentmillis<=t1){                                                    //zona temporal 1
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  
  
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
}
else if(millis()-currentmillis<=t2&&millis()-currentmillis>t1){                     //zona temporal 2
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  
  digitalWrite(10,0);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,1);                                                               //B GREEN
  
}
else if(millis()-currentmillis<=t3&&millis()-currentmillis>t2){                     //zona temporal 3
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  
  digitalWrite(10,0);                                                               //B RED
  digitalWrite(11,1);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
}
else if(millis()-currentmillis<=t4&&millis()-currentmillis>t3){                     //zona temporal 4
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
}
else if(millis()-currentmillis<=t5&&millis()-currentmillis>t4){                     //zona temporal 5
  digitalWrite(7,0);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,1);                                                                //A GREEN
  
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
}
else if(millis()-currentmillis<=t6&&millis()-currentmillis>t5){                     //zona temporal 6
  digitalWrite(7,0);                                                                //A RED
  digitalWrite(8,1);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
}
else if(millis()-currentmillis<=t7&&millis()-currentmillis>t6){                     //zona temporal 7
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
}
else if(millis()-currentmillis>t7){                                                 //final de cicle i reinici de la magia de llums i colors
  currentmillis=millis();
}
}


  
  
  
