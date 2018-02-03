
/*
düz mantık var yok ile çalışan sürüm
*/

const int in1=11;
const int in2=10;
const int in3=8;
const int in4=9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.write("Sistem Açıldı.");
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0 ) {
    char gelenDeger = Serial.read();
    switch (gelenDeger) {
      case '5' :
        M_Ileri();
        break;
      case '2' :
        M_Geri();
        break;
      case '1' :
        M_Sol();
        break;
      case '3' :
        M_Sag();
        break;
      case '8' :
        M_Kapat();
        break;
    }
  }
}

void M_Ileri () {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);   
 
}
void M_Geri () {
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);  
}
void M_Sag () {
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);  
}
void M_Sol () {
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);  
}
void M_Kapat () {
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);  
}
