uint8_t red_led_pin = 13;
uint8_t yellow_led_pin = 12;
uint8_t green_led_pin = 7;

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
