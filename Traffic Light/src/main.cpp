#include <Arduino.h>

#define RED_LED 23
#define GREEN_LED 22
#define YELLOW_LED 21

void setup() {
    Serial.begin(115200);
    Serial.println("ESP32 Traffic Light Simulation");

    pinMode(RED_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
}

void loop() {
    // Lampu Merah menyala selama 30 detik
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    Serial.println("Lampu Merah ON");
    delay(30000); 

    // Lampu Hijau menyala selama 20 detik
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    Serial.println("Lampu Hijau ON");
    delay(20000); 

    // Lampu Kuning menyala selama 5 detik
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    Serial.println("Lampu Kuning ON");
   delay(5000);
}
