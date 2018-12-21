
int greenPin = 8;

int veryshortPeriod = 100;
int shortPeriod = 300;
int longPeriod = 600;

void setup()
{
    Serial.begin(9600);
    pinMode(greenPin, OUTPUT);
}

void loop()
{
    // Jingle Bells
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    // Jingle Bells
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    //Jingle all the Way
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(shortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(veryshortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(veryshortPeriod);
    digitalWrite(greenPin, LOW);
    delay(veryshortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(greenPin, LOW);
    delay(longPeriod);
    delay(6000);
}
