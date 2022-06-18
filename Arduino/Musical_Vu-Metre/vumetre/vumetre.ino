int LEDs[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Assign the pins for the leds
int Audio = A0;
int sound;
int i;

void setup() {
    i = 0;
    while (i <= sizeof(LEDs)) {
        pinMode(LEDs[i], OUTPUT);
        i++;
    }
}

void loop() {

    sound = analogRead(Audio);
    Serial.println(sound);
    sound /= 35; //Change the sensitivity by changing Denominator

    if (sound == 0) {
        i = 0;
        while (i <= sizeof(LEDs)) {
            digitalWrite(LEDs[i], LOW);
            i++;
        }   
    } else {
        while (i < s) {
            digitalWrite(LEDs[i], HIGH);
            delay(40);
            i++;
        }
        while (i < sizeof(LEDs)) {
            digitalWrite(LEDs[i], LOW);
        }
    }
}