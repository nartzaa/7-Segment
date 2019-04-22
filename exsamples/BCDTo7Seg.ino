#include "BCDTo7Seg.h"

BCDTo7Seg dsp;

int Num1=8;
int Num2=9;
int j=0;

void setup() {
  dsp.attach(0,1,2,3); // pins
  pinMode(Num1,OUTPUT);
  pinMode(Num2,OUTPUT);
  digitalWrite(Num1,LOW);
  digitalWrite(Num2,LOW);
}

void loop() {
  for(int i=0;i<10;i++){
    digitalWrite(Num2,HIGH);
    dsp.write(i);
    digitalWrite(Num2,LOW);
    delay(500);    
  }
  j++;
  digitalWrite(Num1,HIGH);
  dsp.write(j);
  digitalWrite(Num1,LOW);
  if (j>9)
  {
    j=0;
  }
  
}