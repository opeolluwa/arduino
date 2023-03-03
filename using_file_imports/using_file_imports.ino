#include "functions.ino"

// An hytopthtical fire alarm and management system to explore data types

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("An hypothetical fire alarm system");
}

void loop() {
  bool fireDetected = isHouseOnFire();
  if (fireDetected) {
    printf("Fire Detected Help");
    turnOnTheAlarm();
    turnOnSprinkler();
    callEmergencyService();
  }
  // put your main code here, to run repeatedly:
}



