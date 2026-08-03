/*
 Smart Irrigation System
 Author: Ahmed Khalifa
*/

const int sensorPin = 34;
const int relayPin = 26;

const int moistureThreshold = 2000;

void setup()
{
    Serial.begin(115200);

    pinMode(relayPin, OUTPUT);

    digitalWrite(relayPin, LOW);
}

void loop()
{
    int moisture = analogRead(sensorPin);

    Serial.print("Moisture: ");
    Serial.println(moisture);

    if (moisture > moistureThreshold)
    {
        digitalWrite(relayPin, HIGH);

        Serial.println("Pump ON");
    }
    else
    {
        digitalWrite(relayPin, LOW);

        Serial.println("Pump OFF");
    }

    delay(3000);
}
