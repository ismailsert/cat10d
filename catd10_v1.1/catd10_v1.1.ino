
/*
dc hız kontrollü sürüm
*/

const int in1=11;
const int in2=10;
const int in3=8;
const int in4=9;
const int k1=6;
const int k2=5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Sistem Açıldı.");
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(k1,OUTPUT);
pinMode(k2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(in1,HIGH);
 digitalWrite(in2,LOW);
 analogWrite(k2,0);
 digitalWrite(in3,HIGH);
 digitalWrite(in4,LOW);
 analogWrite(k1,0);
    
 
}

