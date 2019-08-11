void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
   pinMode(A1,INPUT);
    pinMode(A2,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
 

}

void loop() {
  int LDR1=analogRead(A0);
  Serial.println(LDR1);
  int LDR2=analogRead(A1);
  Serial.println(LDR2);
  int LDR3=analogRead(A2);
  Serial.println(LDR3);
  if(LDR1>50 &&LDR2>50 &&LDR3>50)// IF ALL OFF GO STRAIGHT
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
     digitalWrite(11,LOW);
    digitalWrite(12,LOW); 
  } 
  else if( LDR2<=LDR1 && LDR2<=LDR3)  // GO STRAIGHT LDR 2 OFF
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
     digitalWrite(11,LOW);
    digitalWrite(12,HIGH); 
    
  }
 else if( LDR1<=LDR2 && LDR1<=LDR3)    //LEFT TURN LDR 1 OFF
  {
     digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
     digitalWrite(11,HIGH);
    digitalWrite(12,LOW); 
  }
  else if(LDR3<=LDR1 && LDR3<=LDR2)   //RIGHT TURN LDR 3 OFF
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
     digitalWrite(11,LOW);
    digitalWrite(12,HIGH); 
  }
  
}
 
