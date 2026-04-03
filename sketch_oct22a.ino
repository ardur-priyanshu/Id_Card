#include<NewPing.h>
NewPing sonic(4,12,500);

void setup(){
  
  pinMode(14,OUTPUT);
  Serial.begin(9600);

}
void loop(){

  float d = sonic.ping_cm();
  Serial.println(d);
  delay(500);
  if(d<50){
    digitalWrite(14,HIGH);
  }else{
    digitalWrite(14,LOW);
  }
}