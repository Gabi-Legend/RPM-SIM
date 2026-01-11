int leds[] = {2,3,4,5,6,7};

void setup() {
  for(int i = 0; i < 7; i++)
    pinMode(leds[i], OUTPUT);

}

void loop() {
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(leds[i],HIGH);
    delay(1000);
    digitalWrite(leds[i], LOW);
    delay(1000);
  }
}
