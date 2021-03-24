
unsigned long t=200;   //temps de delay
const int led0=10;     //assignacio pin 10 com a sortida pel led
const int B1Pin=2;     //assignacio pin 2 per entrada boto 1
int B1State=0;         //per guardar estat del boto 1
const int B2Pin=3;     //assignacio pin 2 per entrada boto 2
int B2State=0;         //per guardar estat del boto 2
int i=0;               //constant per controlar for loops
int w=30;               //constant per controlar while loop

void setup()
{
Serial.begin(9600);
pinMode(led0,OUTPUT);
pinMode(B1Pin, INPUT);
pinMode(B2Pin, INPUT);
}

void loop() 
{
        B1State = digitalRead(B1Pin);  //llegir l’estat del button 1 i gardar-lo
        B2State =digitalRead(B2Pin);   //llegir l'estat del boto 2
if (B1State==1&&B2State==0)
{
  for(int i=0; i<30; i++)
  digitalWrite(led0,1);
  delay(t);
  digitalWrite(led0,0);
  delay(t);
}
else if(B1State==0&&B2State==1)
{
while( i<w)
  digitalWrite(led0,1);
  delay(t);
  digitalWrite(led0,0);
  delay(t);
  i++;
}
else
{
  i=0;
}
}
