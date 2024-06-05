/*
 * StrydoLabs All Right Recived|strydolabs@gmail.com|damithrafdo@gmail.com|+94716507322|
 * Vesak Lantern Relay Programming *8 Pattern
 * Hardware Specification: Arduino UNO, 8Ch Relay
 * Simulation: https://wokwi.com/projects/399891869136786433
 * Github:https://github.com/DamithraFdo/Vesak-Lantern-Relay-Programming
 */
void setup() {
  pinMode(2,OUTPUT); //Relay line 01
  pinMode(3,OUTPUT); //Relay line 02
  pinMode(4,OUTPUT); //Relay line 03
  pinMode(5,OUTPUT); //Relay line 04
  pinMode(6,OUTPUT); //Relay line 05
  pinMode(7,OUTPUT); //Relay line 06
  pinMode(8,OUTPUT); //Relay line 07
  pinMode(9,OUTPUT); //Relay line 08
}

void loop() {
  Pattern1();
  delay(1000);
  Pattern2();
  delay(1000);
  Pattern3();
  delay(1000);
  Pattern4();
  delay(1000);
  Pattern5();
  delay(1000);
  Pattern6();
  delay(1000);
  Pattern7();
  delay(1000);
  Pattern8();
  delay(1000);
}
void Pattern1(){          //2-6 on off, 6-2 on off (ok)
  for (int i=2; i<7; i++){
  digitalWrite(i, HIGH);
  delay(500);
  digitalWrite(i, LOW);
  }
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
  
  for (int i=6; i>1; i--){
  digitalWrite(i, HIGH);
  delay(500);
  digitalWrite(i, LOW);
  }
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
    delay(1000);
}
void Pattern2(){          //2,3,4,5,6 eken eke on wenna one itapasse off wela 6,5,4,3,2 piliwelata on wenna one (ok)
  for (int i=2; i<7; i++){
  digitalWrite(i, HIGH);
  delay(500);
  }
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
  
  for (int i=6; i>1; i--){
  digitalWrite(i, HIGH);
  delay(500);
  }
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
    delay(1000);
}
void Pattern3(){        //knight rider 2-6, 6-2 (ok)
   for (int i=2; i<6; i++){
  digitalWrite(i, HIGH);
  delay(50);
  digitalWrite(i+1, HIGH);
  delay(50);
  digitalWrite(i, LOW);
  }
  delay(100);
  
  for (int i=6; i>1; i--){
  digitalWrite(i, HIGH);
  delay(50);
  digitalWrite(i-1, HIGH);
  delay(50);
  digitalWrite(i, LOW);
  }
  delay(100);
}  
void Pattern4(){        //2,3,4,5,6 on (ok)
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(8000);
}
void Pattern5(){         //2,7,8,9 on (ok)
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(8000);
}
void Pattern6(){          //2,4,6,on after 3,5,on (ok)
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(8000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(8000);
}
void Pattern7(){          //knight rider (ok)
  for (int i=2; i<9; i++){
  digitalWrite(i, HIGH);
  delay(50);
  digitalWrite(i+1, HIGH);
  delay(50);
  digitalWrite(i, LOW);
  }
  delay(100);
  
  for (int i=9; i>1; i--){
  digitalWrite(i, HIGH);
  delay(50);
  digitalWrite(i-1, HIGH);
  delay(50);
  digitalWrite(i, LOW);
  }
  delay(100);
}
void Pattern8(){        //6,7 on (ok)
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(8000);
}
