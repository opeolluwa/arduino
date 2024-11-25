unsigned int red_led_pin = 13;
unsigned int yellow_led_pin = 12;
unsigned int green_led_pin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led_pin, OUTPUT);
  pinMode(yellow_led_pin, OUTPUT);
  pinMode(green_led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led_pin, HIGH);
  delay(5000);
  digitalWrite(red_led_pin, LOW);
  digitalWrite(yellow_led_pin, HIGH);
  delay(1000);
  digitalWrite(yellow_led_pin, LOW);
  digitalWrite(green_led_pin, HIGH);
  delay(5000);
  digitalWrite(green_led_pin, LOW);
}
