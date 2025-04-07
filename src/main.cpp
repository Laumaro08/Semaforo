#include <Arduino.h>
int sem1[4][3]={
                {1,0,0},
                {1,1,0},
                {0,0,1},
                {0,1,0}
                };

int sem2[4][3]={
                  {0,0,1},
                  {0,1,0},
                  {1,0,0},
                  {0,1,0}
                  };

int pin1[3]={2,3,4};

int pin2[3]={5,6,7};

void setup() {
 for(int i=0; i<3; i++){
    pinMode (pin1[i], OUTPUT);
    pinMode (pin2[i], OUTPUT);
 }
}

void loop() {
  
for(int i=0; i<4; i++){
  for(int c=0; c<3; c++){
    digitalWrite(pin1[c], sem1[i][c]);
    digitalWrite(pin2[c], sem2[i][c]);
    delay(5000);
  }
 }
}