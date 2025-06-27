/*
 * StrydoLabs All Right Reserved | strydolabs@gmail.com | damithrafdo@gmail.com | +94716507322
 * Vesak Lantern Relay Programming - 8 Patterns
 * Hardware: Arduino UNO, 8Ch Relay
 * Simulation: https://wokwi.com/projects/399891869136786433
 * GitHub: https://github.com/DamithraFdo/Vesak-Lantern-Relay-Programming
 */

const int relayPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(relayPins[i], OUTPUT);
  }

  // Optional: Serial debugging
  // Serial.begin(9600);

  Startup();
}

void loop() {
  Pattern1(); delay(1000);
  Pattern2(); delay(1000);
  for (int i = 0; i < 6; i++) {
    Pattern3(); delay(1000);
  }
  Pattern4(); delay(1000);
  Pattern5(); delay(1000);
  Pattern6(); delay(1000);
  for (int i = 0; i < 6; i++) {
    Pattern7(); delay(1000);
  }
  Pattern8(); delay(1000);
}

// Utility function to turn all relays OFF
void AllRelaysOff() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(relayPins[i], LOW);
  }
}

void Pattern1() {
  for (int i = 2; i <= 6; i++) {
    digitalWrite(i, HIGH); delay(500);
    digitalWrite(i, LOW);
  }
  AllRelaysOff(); delay(1000);

  for (int i = 6; i >= 2; i--) {
    digitalWrite(i, HIGH); delay(500);
    digitalWrite(i, LOW);
  }
  AllRelaysOff(); delay(1000);
}

void Pattern2() {
  for (int i = 2; i <= 6; i++) {
    digitalWrite(i, HIGH); delay(500);
  }
  AllRelaysOff(); delay(1000);

  for (int i = 6; i >= 2; i--) {
    digitalWrite(i, HIGH); delay(500);
  }
  AllRelaysOff(); delay(1000);
}

void Pattern3() {
  for (int i = 2; i < 6; i++) {
    digitalWrite(i, HIGH); delay(50);
    digitalWrite(i + 1, HIGH); delay(50);
    digitalWrite(i, LOW);
  }
  delay(100);
  for (int i = 6; i > 2; i--) {
    digitalWrite(i, HIGH); delay(50);
    digitalWrite(i - 1, HIGH); delay(50);
    digitalWrite(i, LOW);
  }
  delay(100);
}

void Pattern4() {
  for (int i = 2; i <= 6; i++) digitalWrite(i, HIGH);
  for (int i = 7; i <= 9; i++) digitalWrite(i, LOW);
  delay(8000);
  AllRelaysOff();
}

void Pattern5() {
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  for (int i = 3; i <= 6; i++) digitalWrite(i, LOW);
  delay(8000);
  AllRelaysOff();
}

void Pattern6() {
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  for (int i = 3; i <= 5; i += 2) digitalWrite(i, LOW);
  for (int i = 7; i <= 9; i++) digitalWrite(i, LOW);
  delay(8000);

  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(8000);
  AllRelaysOff();
}

void Pattern7() {
  for (int cycle = 0; cycle < 3; cycle++) {
    for (int i = 0; i < 8; i++) {
      if (i - 1 >= 0) digitalWrite(relayPins[i - 1], LOW);
      if (i < 8) digitalWrite(relayPins[i], HIGH);
      if (i + 1 < 8) digitalWrite(relayPins[i + 1], HIGH);
      if (i + 2 < 8) digitalWrite(relayPins[i + 2], HIGH);
      delay(25);
    }
    for (int i = 7; i >= 0; i--) {
      if (i + 1 < 8) digitalWrite(relayPins[i + 1], LOW);
      if (i < 8) digitalWrite(relayPins[i], HIGH);
      if (i - 1 >= 0) digitalWrite(relayPins[i - 1], HIGH);
      if (i - 2 >= 0) digitalWrite(relayPins[i - 2], HIGH);
      delay(25);
    }
  }
  AllRelaysOff();
}

void Pattern8() {
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  for (int i = 2; i <= 5; i++) digitalWrite(i, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(8000);
  AllRelaysOff();
}

void Startup() {
  for (int i = 0; i < 8; i++) digitalWrite(relayPins[i], HIGH);
  delay(5000);
  AllRelaysOff();
}
