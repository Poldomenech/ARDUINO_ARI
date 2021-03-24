
unsigned long t=200;
const int led0=10;     //assignacio pin 10 com a sortida pel led
const int B1Pin=2;        //assignacio pin 2 per entrada boto 1
int B1State=0;        //per guardar estat del boto 1
const int B2Pin=3;        //assignacio pin 2 per entrada boto 2
int B2State=0;        //per guardar estat del boto 2
int i=0;              //constant per controlar loops

void setup()
{
Serial.begin(9600);
pinMode(led0,OUTPUT);
pinMode(B1Pin, INPUT);
pinMode(B2Pin, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:

}
