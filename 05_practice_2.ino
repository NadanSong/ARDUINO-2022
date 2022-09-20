#define PIN_LED 7
unsigned int count, toggle;

void setup(){
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;//wait for serial port to connect.
  }
  toggle = 1;
  count = 0;
}

void loop() {
  
  if (count ==0){
    count = count+1;
    digitalWrite(PIN_LED , 0);
    delay(1000);
    }
  if (toggle >2){
    toggle = 0;}
    
  if (count > 15){
    while(1){
    digitalWrite(PIN_LED, 1);
      }
    }
  count = count+1;
  digitalWrite(PIN_LED, toggle);
  
  toggle = toggle +1;
  
  delay(100);
}

int toggle_state(int toggle){
  return toggle;
}
