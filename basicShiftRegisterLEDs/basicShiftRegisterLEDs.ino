int latchPin = 5;
int clockPin = 6;
int dataPin = 4;

byte leds = 0;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  leds = 0;
  updateShiftRegister();
}

void loop() {
  for(int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(100);
  }
    for(int i = 7; i >= 0; i--)
  {
    bitClear(leds, i);
    updateShiftRegister();
    delay(100);
  }

}

void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}

