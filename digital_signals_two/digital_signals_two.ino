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
  for (int counter = 0; counter <= 5; counter++) {
    // if (AVAILABLE_PINS[counter] == pinNumber) {
      digitalWrite(AVAILABLE_PINS[counter], HIGH);
        delay(1000);
    // } else {
      digitalWrite(AVAILABLE_PINS[counter], LOW);
    // }
  }
  // delay(1000);
}


// a function to change the pin mode
// void changrPinMode(int PinNumber) {
//   for (int counter = 0; counter < AVAILABLE_PINS.len; counter++) {
//     if (AVAILABLE_PINS[counter] == pinNumber) {
//       digitalWrite(pinNumber, HIGH);
//     } else {
//       digitalWrite(AVAILABLE_PINS[counter], LOW);
//     }
//   }
//   delay(1000);
// }