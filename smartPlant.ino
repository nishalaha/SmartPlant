void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val;
  val = analogRead(0);
  Serial.println(val);
  delay(180000);
  if(val < 280){
    digitalWrite(LED_BUILTIN, HIGH);
    }
    else{
    digitalWrite(LED_BUILTIN, LOW);
    }
  }
