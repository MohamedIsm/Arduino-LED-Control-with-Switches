int red1= 2;
int Green1=  4;
int red2=  5;
int Green2=  7;
int pot1 = 9;
int pot2=  10;
int switch1=0;
int switch2=0;
void setup()
{
  
  pinMode(red1,OUTPUT);
  pinMode(Green1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(Green2,OUTPUT);
  pinMode(pot1,INPUT);
  pinMode(pot2,INPUT);
}

void loop()
{
  switch1=digitalRead(pot1);
  switch2=digitalRead(pot2);
  if(switch1==HIGH){
    analogWrite(red1,128);
    analogWrite(Green1,255);
  }else{
    analogWrite(red1,LOW);
    analogWrite(Green1,LOW);    
  }
   if(switch2==HIGH){
    analogWrite(red2,128);
    analogWrite(Green2,255);
  }else{
    analogWrite(red2,LOW);
    analogWrite(Green2,LOW);    
  }
  delay(500);
}