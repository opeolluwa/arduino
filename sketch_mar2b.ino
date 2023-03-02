/**
* HELLO WORLD Example 
* 
*--------------------------------------------------------------------
* A typically Arduino code must have two functions
* void setup() and void loop()
*
* both function are required to run a program 
* one thing is one can put the setup() in one file and put the void lop in another file 
*
*-----------------------------------------------------------------
*
* the code below will brint hello world to the serial monitor
*/

void setup() {
  /**
  * the Serial.begin() takes a numeric argument 
  * the numeric argument is the `badu rate` whis is the rate at which is the computational speed of  the board
  */
  Serial.begin(9600);
  Serial.println("Hello World");// print to the standard output
  // put your setup code here, to run once

  // Ctr + Shift + M to open the serial monitor
  // Ctrl + U to run the code

}

void loop() {
  // put your main code here, to run repeatedly:

}
