#include <SoftwareSerial.h>

//SoftwareSerial mySerial1(10,11); // RX, TX
//SoftwareSerial mySerial2(8, 9); // RX, TX


void setup() {
  
  Serial.begin(38400);
  pinMode(9,OUTPUT);
 // pinMode(13,OUTPUT);
  while (!Serial) {
    ; 
  }
  Serial1.begin(9600);
  Serial2.begin(9600);
  //mySerial2.begin(9600);
  //Serial.print("Hello");
}

void loop() { 
  int i,j,i1,j1;
  
    /*if(Serial1.available())
    {
      i1=Serial1.read();
      Serial.print(char(i1));
    }*/

    if(Serial1.available()&&Serial2.available())
    {
      i=Serial1.read();
      j=Serial2.read();
      Serial1.write(1);
      Serial2.write(1);
      //Serial.print(char(i));
      //Serial.println(char(j));
      
      while(!Serial1.available())
      {
      
       if(Serial2.available())
       {
        j=Serial2.read();
        Serial2.write(1);
       }
       if((char(i)!='0')&&(char(j)!='b'))//Serial1 must be connected to fret board app and Serial2 must be connected to strum app
       {
        Serial.print(char(i));
        //Serial.println(char(j));
        //Serial.print("a");
       }
       
       else
       {
        Serial.print("b");
       }
       //prevj=j;
      }
      i=Serial1.read();
      Serial1.write(1); 
    }
    Serial1.flush();
    Serial2.flush();
    Serial.flush();
 }
