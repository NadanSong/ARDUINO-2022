#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initialize serial port
  while (!Serial) {
    ;//wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  Serial.println(++count);
  if (toggle >1)
    toggle = 0;
  toggle = toggle_state(toggle); //toggle LED value.
  digitalWrite(PIN_LED, toggle);
  toggle = toggle +1;
  delay(1000); // wait for 1,000milliseconds
}

int toggle_state(int toggle){
  return toggle;
}
