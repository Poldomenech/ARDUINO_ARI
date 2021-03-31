
/**********************************************************************************
**                                                                               **
**                                 D6                                            **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int ledPin[]={6,7,8,9,10,11,12};             //definir noms pels pins de sortida
int ledNum=7;                                      //definir variable de numero de Leds
unsigned long currentmillis=0;                     //sincro amb millis()
bool ELed1=false;                                  //per guardar estat led 1 Pin7
bool ELed2=false;                                  //per guardar estat led 2 Pin8
bool ELed3=false;                                  //per guardar estat led 3 Pin9
bool ELed4=false;                                  //per guardar estat led 4 Pin10
bool ELed5=false;                                  //per guardar estat led 5 Pin11
bool ELed6=false;                                  //per guardar estat led 6 Pin12
bool ELed7=false;                                  //per guardar estat led 7 Pin6
const int BPin=2;                                  //definir boto a l'entrada 2
const int B2Pin=3;                                 //definir boto a l'entrada 3
int result=0;                                      //guarda resultat tirada
bool botoState=false;                              //estat del boto
bool boto2State=false;                             //estat del boto2
unsigned long tim1=0;                              //per generar delay de suma de dau
unsigned long tim2=0;                              //per gestionar temps d'enenyar resultat

//********** Setup ****************************************************************
void setup() {
  randomSeed(analogRead(A0));                        //per generar noves seqüències ASSEGURAR QUE LA ENTRADA NO ES FA SERVIR
  Serial.begin(9600);                               //definir velocitat
  
  for(int i = 0; i < ledNum; i++){                  //definir els pins 7,8,9,10,11 i 12 com sortides
  pinMode(ledPin[i], OUTPUT);
  }
  
  for(int j = 0; j < ledNum ; j++){                 //posar Leds a 0
  digitalWrite(ledPin[j], 0);
  }
  pinMode(BPin,INPUT);                             //definir pin 2 com a entrada
  pinMode(B2Pin,INPUT);                            //definir pin 3 com a entrada
  
}

//********** Loop *****************************************************************
void loop() {
  botoState=digitalRead(BPin);                      //PAE
  boto2State=digitalRead(B2Pin);
  

  if(boto2State==1&&millis()-tim1>200){
    tim1=millis();
    result=result+1;
    tim2=millis();
  }
  else if(result>6){
    result=0;
  }


  
  if (botoState==1){                                //OB100
    tim2=millis();
    result=random(1,6);
      ELed1=0;
      ELed2=0;
      ELed3=0;
      ELed4=0;
      ELed5=0;
      ELed6=0;
      ELed7=0;   
  }
  
  
  else if (botoState==0&&millis()-tim2<=5000){
    switch(result){
      case 0:
      ELed1=0;
      ELed2=0;
      ELed3=0;
      ELed4=0;
      ELed5=0;
      ELed6=0;
      ELed7=0;
      break;
      
      case 1:
      ELed1=0;
      ELed2=0;
      ELed3=0;
      ELed4=0;
      ELed5=0;
      ELed6=0;
      ELed7=1;
     
      break;
      
      case 2:
      ELed1=1;
      ELed2=0;
      ELed3=0;
      ELed4=0;
      ELed5=0;
      ELed6=1;
      ELed7=0;
      break;

      case 3:
      ELed1=1;
      ELed2=0;
      ELed3=0;
      ELed4=0;
      ELed5=0;
      ELed6=1;
      ELed7=1;
      break;

      case 4:
      ELed1=1;
      ELed2=0;
      ELed3=1;
      ELed4=1;
      ELed5=0;
      ELed6=1;
      ELed7=0;
      break;

      case 5:
      ELed1=1;
      ELed2=0;
      ELed3=1;
      ELed4=1;
      ELed5=0;
      ELed6=1;
      ELed7=1;
      break;

      case 6:
      ELed1=1;
      ELed2=1;
      ELed3=1;
      ELed4=1;
      ELed5=1;
      ELed6=1;
      ELed7=0;
      break;
    }
  }

    else if(millis()-tim2>5000){
      ELed1=0;
      ELed2=0;
      ELed3=0;
      ELed4=0;
      ELed5=0;
      ELed6=0;
      ELed7=0;
    
  }
  
digitalWrite(6,ELed7);                               //PAA
digitalWrite(7,ELed1);
digitalWrite(8,ELed2);
digitalWrite(9,ELed3);
digitalWrite(10,ELed4);
digitalWrite(11,ELed5);
digitalWrite(12,ELed6);
Serial.println(result);
}

  
  
  
