
/**********************************************************************************
**                                                                               **
**                                 Semafors                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int ledPin[]={3,4,5,6,7,8,9,10,11,12};       //definir noms pels pins de sortida
int ledNum=10;                                     //definir variable de numero de Leds
unsigned long currentmillis=0;                     //sincro amb millis()
unsigned long t1=1000;                             //zona temporal 1
unsigned long t2=5000;                             //zona temporal 2
unsigned long t3=10000;                            //zona temporal 3
unsigned long t4=11000;                            //zona temporal 4
unsigned long t5=15000;                            //zona temporal 5
unsigned long t6=20000;                            //zona temporal 6
unsigned long t7=21000;                            //zona temporal 7
unsigned long cicleA=0;                       //marca de cicle per peatons A
unsigned long cicleB=0;                       //marca de cicle per peatons B
int tpA=0;                                    //constant temps peatons semafor A
int tpB=0;                                    //constant temps peatons semafor B
unsigned long sincA=50000;                    //currentmillis per peatons A
unsigned long sincB=50000;                    //currentmillis per peatons B 
const int BAPin=22;                                 //definir nom per Pin 22 Arduino (peatons semafor A)
const int BBPin=23;                                 //definir nom per Pin 23 Arduino (peatons semafor B)
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
  if (BAState==0){
BAState=digitalRead(BAPin);                                                         //actualitza estat del boto peatons semafor A
tpA=millis();
  }
  if (BBState==0){
BBState=digitalRead(BBPin);                                                         //actualitza estat del boto peatons semafor B
tpB=millis();
  }
  Serial.println(millis()-cicleA);

//********** Passen els peatons ****************************************************
if(BAState==1){                                                                     //si s'ha pulsat A peatons
   BAState=1;
  if(millis()-tpA<=3000){                                //peatons poden passar
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  digitalWrite(3,1);                                                                //peatons GREEN
  digitalWrite(4,0);                                                                //peatons RED
  cicleA=millis();
 }
  else if(millis()-tpA>3000&&millis()-currentmillis<=90000){                      //avisa que queden dos segons
    if(millis()-cicleA<=300){
        digitalWrite(7,1);                                                                //A RED
        digitalWrite(8,0);                                                                //A ORANGE
        digitalWrite(9,0);                                                                //A GREEN
        digitalWrite(3,0);                                                                //peatons GREEN
        digitalWrite(4,0);                                                                //peatons RED
        BAState=1;
    }
    else if(millis()-sincA>300&&millis()-sincA<=600){                                    
        digitalWrite(7,1);                                                                //A RED
        digitalWrite(8,0);                                                                //A ORANGE
        digitalWrite(9,0);                                                                //A GREEN
        digitalWrite(3,1);                                                                //peatons GREEN
        digitalWrite(4,0);                                                                //peatons RED
        BAState=1;
    }
    else if(millis()-tpA>3000&&millis()-sincA>900&&millis()-sincA<=1200){
        digitalWrite(7,1);                                                                //A RED
        digitalWrite(8,0);                                                                //A ORANGE
        digitalWrite(9,0);                                                                //A GREEN
        digitalWrite(3,0);                                                                //peatons GREEN
        digitalWrite(4,0);                                                                //peatons RED
        BAState=1;
  }
  else if(millis()-tpA>3000&&millis()-sincA>1200&&millis()-sincA<=2000){
        digitalWrite(7,1);                                                                //A RED
        digitalWrite(8,0);                                                                //A ORANGE
        digitalWrite(9,0);                                                                //A GREEN
        digitalWrite(3,1);                                                                //peatons GREEN
        digitalWrite(4,0);                                                                //peatons RED
        BAState=1;
  }
  else if(millis()-sincA>2000&&(millis()-tpA>3000&&millis()-currentmillis<=90000)){
    tpA=millis();
    BAState=0;
    sincA=millis();
  }
  
  
}
}
//********** Semafor A cotxes passen *****************************************************************  
if (millis()-currentmillis<=t1&&BAState==0){                                           //zona temporal 1 semafor A
  
  
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  digitalWrite(3,0);                                                                //peatons GREEN
  digitalWrite(4,1);                                                                //peatons RED
  

}
else if(millis()-currentmillis<=t2&&millis()-currentmillis>t1&&BAState==0){            //zona temporal 2
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  digitalWrite(3,0);                                                                //peatons GREEN
  digitalWrite(4,1);                                                                //peatons RED
  
}
else if(millis()-currentmillis<=t3&&millis()-currentmillis>t2&&BAState==0){            //zona temporal 3
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  digitalWrite(3,0);                                                                //peatons GREEN
  digitalWrite(4,1);                                                                //peatons RED

}
else if(millis()-currentmillis<=t4&&millis()-currentmillis>t3&&BAState==0){             //zona temporal 4
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  digitalWrite(3,0);                                                                //peatons GREEN
  digitalWrite(4,1);                                                                //peatons RED

}
else if(millis()-currentmillis<=t5&&millis()-currentmillis>t4&&BAState==0){              //zona temporal 5
  digitalWrite(7,0);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,1);                                                                //A GREEN
  digitalWrite(3,0);                                                                //peatons GREEN
  digitalWrite(4,1);                                                                //peatons RED

}
else if(millis()-currentmillis<=t6&&millis()-currentmillis>t5&&BAState==0){             //zona temporal 6
  digitalWrite(7,0);                                                                //A RED
  digitalWrite(8,1);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  digitalWrite(3,0);                                                                //peatons GREEN
  digitalWrite(4,1);                                                                //peatons RED

}
else if(millis()-currentmillis<=t7&&millis()-currentmillis>t6&&BAState==0){            //zona temporal 7
  digitalWrite(7,1);                                                                //A RED
  digitalWrite(8,0);                                                                //A ORANGE
  digitalWrite(9,0);                                                                //A GREEN
  digitalWrite(3,0);                                                                //peatons GREEN
  digitalWrite(4,1);                                                                //peatons RED

}
else if(millis()-currentmillis>t7){                                         //final de cicle i reinici de la magia de llums i colors
  currentmillis=millis();
}

//********** Semafor B cotxes passen ***************************************************************** 
if (millis()-currentmillis<=t1){                                                    //zona temporal 1 Semafor B
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
  digitalWrite(5,0);                                                                //peatons GREEN
  digitalWrite(6,1);                                                                //peatons RED
}
else if(millis()-currentmillis<=t2&&millis()-currentmillis>t1){                     //zona temporal 2
  digitalWrite(10,0);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,1);                                                               //B GREEN
  digitalWrite(5,0);                                                              //peatons GREEN
  digitalWrite(6,1);                                                                //peatons RED
}
else if(millis()-currentmillis<=t3&&millis()-currentmillis>t2){                     //zona temporal 3
  digitalWrite(10,0);                                                               //B RED
  digitalWrite(11,1);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
  digitalWrite(5,0);                                                              //peatons GREEN
  digitalWrite(6,1);                                                                //peatons RED
}
else if(millis()-currentmillis<=t4&&millis()-currentmillis>t3){                     //zona temporal 4
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
  digitalWrite(5,0);                                                              //peatons GREEN
  digitalWrite(6,1);                                                                //peatons RED
}
else if(millis()-currentmillis<=t5&&millis()-currentmillis>t4){                     //zona temporal 5
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
  digitalWrite(5,0);                                                              //peatons GREEN
  digitalWrite(6,1);                                                                //peatons RED
}
else if(millis()-currentmillis<=t6&&millis()-currentmillis>t5){                     //zona temporal 6
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
  digitalWrite(5,0);                                                              //peatons GREEN
  digitalWrite(6,1);                                                                //peatons RED
}
else if(millis()-currentmillis<=t7&&millis()-currentmillis>t6){                     //zona temporal 7
  digitalWrite(10,1);                                                               //B RED
  digitalWrite(11,0);                                                               //B ORANGE
  digitalWrite(12,0);                                                               //B GREEN
  digitalWrite(5,0);                                                              //peatons GREEN
  digitalWrite(6,1);                                                                //peatons RED
}

}
  
  
  
