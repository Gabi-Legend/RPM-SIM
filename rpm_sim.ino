int leds[] = {2,3,4,5,6,7};
int upshift_button = 13;

int gear = 1;
bool lastState = HIGH;
bool currentState;

void setup() {
  for(int i = 0; i < 7; i++)
    pinMode(leds[i], OUTPUT);
  pinMode(upshift_button, INPUT_PULLUP);
  Serial.begin(9600);
  for(int i = 1; i <= 3; ++i)
  {
    for(int i = 0; i < 7; i++)
      digitalWrite(leds[i], HIGH);
    delay(300);
    for(int i = 0; i < 7; ++i)
      digitalWrite(leds[i], LOW);
    delay(300);
  }
}

void loop() {
  currentState = digitalRead(upshift_button);
  if(currentState == LOW && lastState == HIGH && gear < 5){
      gear++;
      Serial.println(gear);
      lastState = LOW;
      delay(50);
  }
  else{
    lastState = currentState;
  }

}
