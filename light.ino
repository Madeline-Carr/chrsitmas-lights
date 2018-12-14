
int greenPin = 8;
int delayPeriod = 500;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    digitalWrite(greenPin, HIGH);
    delay(500);
    digitalWrite(greenPin, LOW);
    delay(500);
}
