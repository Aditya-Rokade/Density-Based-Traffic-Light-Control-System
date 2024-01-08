#include <cvzone.h>

SerialData serialData(12, 1); //(numOfValsRec,digitsPerValRec)
int valsRec[12]; // array of int with size numOfValsRec 

int red1 = 13 ;
int yellow1= 12;
int green1 = 11;
int red2 = 10;
int yellow2= 9;
int green2 = 8;
int red3 = 7;
int yellow3= 6;
int green3 = 5;
int red4 = 4;
int yellow4 = 3 ;
int green4 = 2;

void setup() {
  serialData.begin();
  pinMode(red1, OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(yellow3,OUTPUT);
  pinMode(green3,OUTPUT);
  pinMode(red4, OUTPUT);
  pinMode(yellow4,OUTPUT);
  pinMode(green4,OUTPUT);
}

void loop() {

  serialData.Get(valsRec);
  digitalWrite(red1, valsRec[0]);
  digitalWrite(yellow1, valsRec[1]);
  digitalWrite(green1, valsRec[2]);
  digitalWrite(red2, valsRec[3]);
  digitalWrite(yellow2, valsRec[4]);
  digitalWrite(green2, valsRec[5]);
  digitalWrite(red3, valsRec[6]);
  digitalWrite(yellow3, valsRec[7]);
  digitalWrite(green3, valsRec[8]);
  digitalWrite(red4, valsRec[9]);
  digitalWrite(yellow4, valsRec[10]);
  digitalWrite(green4, valsRec[11]);
  
}
