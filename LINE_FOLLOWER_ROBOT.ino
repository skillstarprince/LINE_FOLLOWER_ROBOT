#define S1 9
#define S2 10
#define LM1 3
#define LM2 4
#define RM1 5
#define RM2 6
void setup() {
  // put your setup code here, to run once:
pinMode(S1,INPUT);
pinMode(S2,INPUT);
pinMode(LM1,OUTPUT);
pinMode(LM2,OUTPUT);
pinMode(RM1,OUTPUT);
pinMode(RM2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(S1==HIGH && S2==HIGH)  //move forward on line
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  Serial.println("forward");
  }
  if(S1==HIGH && S2==LOW) //move left on line
  {
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  Serial.println("left"); 
  }
  if(S1==LOW && S2==HIGH) //move right on line
  {
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  Serial.println("right"); 
  }
   if(S1==LOW && S2==LOW) //stop
  {
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  Serial.println("stop"); 
  }
}
