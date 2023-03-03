// An hytopthtical fire alarm and management system to explore data types

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("An hypothetical fire alarm system");
}

void loop() {
  bool fireDetected = isHouseOnFire();
  if (fireDectected) {
    println("Fire Detected Help");
    turnOnTheAlarm();
    turnOnSprinkler();
    callEmergencyService();
  }
  // put your main code here, to run repeatedly:
}


/**
* a function to read data from sensor 
* typically, the data will be read from a sensor 
* more on this later
*/
bool isHouseOnFire() {
  return true;
}


// a function to turn on the sprinkler
// since the function wont return a value, it is best made void
void turnOnSprinkler() {
  println("Sprinklers turned on");
}


// a functin to turn on the alarm
void tunrOnTheAlarm() {
  println("Sounding the alarm");
}



// call emercency service
void callEmercencyService(){
  println("Calling 911");
}
