#include<cvzone.h>
int LED=11;

SerialData serialData(1,3);
int recVal[1];
void setup(){
  pinMode(LED,OUTPUT);
  serialData.begin();
}
void loop(){
  serialData.Get(recVal);
  analogWrite(LED,recVal[0]);
}