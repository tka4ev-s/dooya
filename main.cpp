
#include <Arduino.h>
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin.
    pinMode(11, OUTPUT);
    pinMode(8,INPUT);
    pinMode(9, INPUT);
    pinMode(10, INPUT);
    Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  Serial.print("Pin8  _"); // Стоп
  Serial.println(digitalRead(8));
  Serial.print("Pin9  _");// закрыть шторы
  Serial.println(digitalRead(9));
  Serial.print("Pin10  _");// открыть шторы
  Serial.println(digitalRead(10));
  if ( digitalRead(8)){
    for(int8_t i=1; i<3; i++){
  //P
  digitalWrite(11, 1);  
  delayMicroseconds(4850); 
  digitalWrite(11, 0);
  delayMicroseconds(1490); 
  //1 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //2 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //3 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //4 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726); 
  //5 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //6 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //7 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //8 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726); 
  //9 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);   
  //10 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //11 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //12 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //3 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //14 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //15 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //16 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //17 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //18 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //19 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //20 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //21 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //22 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //23 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //24 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //25 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //26 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //27 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //28 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //29 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //30 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //31 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //32 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //33 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //34 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //35 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //36 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //37 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //38 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //39 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //40 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
    }
  }
 if(digitalRead(9)){
   for(int8_t i=1; i<3; i++){
//P
  digitalWrite(11, 1);  
  delayMicroseconds(4850); 
  digitalWrite(11, 0);
  delayMicroseconds(1490); 
  //1 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //2 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //3 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //4 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726); 
  //5 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //6 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //7 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //8 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726); 
  //9 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);   
  //10 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //11 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //12 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //3 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //14 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //15 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //16 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //17 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //18 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //19 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //20 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //21 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //22 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //23 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //24 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //25 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //26 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //27 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //28 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //29 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //30 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //31 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //32 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //33 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //34 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //35 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //36 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //37 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //38 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //39 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //40 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
   }
 }

if (digitalRead(10)){
  for(int8_t i=1; i<3; i++){
  //P
  digitalWrite(11, 1);  
  delayMicroseconds(4850); 
  digitalWrite(11, 0);
  delayMicroseconds(1490); 
  //1 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //2 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //3 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //4 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726); 
  //5 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //6 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //7 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //8 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726); 
  //9 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);   
  //10 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360); 
  //11 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //12 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //3 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //14 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //15 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //16 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //17 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //18 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //19 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //20 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //21 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //22 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //23 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //24 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //25 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //26 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //27 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //28 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //29 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //30 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //31 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //32 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //33 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //34 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //35 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //36 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  //37 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //38 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //39 0
  digitalWrite(11, 1);  
  delayMicroseconds(360); 
  digitalWrite(11, 0);
  delayMicroseconds(726);
  //40 1
  digitalWrite(11, 1);  
  delayMicroseconds(726); 
  digitalWrite(11, 0);
  delayMicroseconds(360);
  }
}
  delay(100);                       // wait for a second
}
