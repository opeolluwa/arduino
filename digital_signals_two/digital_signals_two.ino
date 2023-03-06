// define the pin number as constants
const int PIN_1 = 2;
const  int PIN_2 = 3;
const int  PIN_3 = 4;
const int  PIN_4 = 5;

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
  // delay(1000);
  // changePinModeReverse();
}


// a function to change the pin mode
void changePinMode() {
  for (int counter = 0; counter < sizeof(AVAILABLE_PINS); counter++) {
      digitalWrite(AVAILABLE_PINS[counter], HIGH);
        delay(1000);
      digitalWrite(AVAILABLE_PINS[counter], LOW);
  }
}

//print in reverse
// void changePinModeReverse() {
//   for (int counter = sizeof(AVAILABLE_PINS0); counter !=0 ; counter--) {
//       digitalWrite(AVAILABLE_PINS[counter], HIGH);
//         delay(1000);
//       digitalWrite(AVAILABLE_PINS[counter], LOW);
      
//   }
// }