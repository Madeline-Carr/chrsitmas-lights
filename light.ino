
int greenPin = 13;
int redPin = 12;

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
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(redPin, LOW);
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
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(redPin, LOW);
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
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(longPeriod);
    //Oh What Fun
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
    delay(veryshortPeriod);
    //It is to Ride
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(veryshortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(shortPeriod);
    digitalWrite(greenPin, LOW);
    delay(veryshortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(greenPin, LOW);
    delay(veryshortPeriod);
    digitalWrite(greenPin, HIGH);
    delay(longPeriod);
    digitalWrite(greenPin, LOW);
    delay(veryshortPeriod);

    delay(6000);
}
