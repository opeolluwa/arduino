// define the pin number as constants
const int PIN_1 = 2;
const  int PIN_2 = 3;
const int  PIN_3 = 4;
const int  PIN_4 = 5;
const unsigned DELAY = 500;

//define the avialbe pins
 int AVAILABLE_PINS[] = {
  PIN_1, PIN_2, PIN_3, PIN_4
};

void setup() {
  // prep the pins to make them take outputs
  pinMode(PIN_1, OUTPUT);
  pinMode(PIN_2, OUTPUT);
  pinMode(PIN_3, OUTPUT);
  pinMode(PIN_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 changePinMode();
  delay(DELAY);
  changePinModeReverse();
}


// a function to change the pin mode
void changePinMode() {
  for (int counter = 2; counter <= 5; counter++) {
      digitalWrite(counter, HIGH);
        delay(DELAY);
      digitalWrite(counter, LOW);
  }
}

//print in reverse
void changePinModeReverse() {
  for (int counter = 5; counter !=0 ; counter--) {
      digitalWrite(counter, HIGH);
        delay(DELAY);
      digitalWrite(counter, LOW);
      
  }
}