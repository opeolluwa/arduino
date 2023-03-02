//prelude and lib imports

/**
* using attribute to determine code compilation
* the attribute start with `#if 1 (or #if 0)` to mean 
*if true and if false respectively
*
* the syntax go thus
* #if 0
*
* ...
* my code goes here
* ....
*
* #endif
*/

// Using truthy and falsy state ment to compile code 
#if 1

void setup() {
  // init
Serial.begin(9600);
Serial.println("\"Hello Engineer Hamziey\n\tmy name is Opeoluwa Adeoye I'm a senior fullstack developer\n\tAt Amazon."); 
Serial.println("Hello, World!");
  // put your setup code here, to run once:
  // introduction_to_arduino
}

void loop() {
  // looop and exec this block


  // put your main code here, to run repeatedly:

}

#endif
