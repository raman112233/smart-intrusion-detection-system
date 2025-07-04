#define BLYNK_TEMPLATE_ID "TMPL3YnPDk550"
#define BLYNK_TEMPLATE_NAME "theft alert"
#define BLYNK_AUTH_TOKEN "j9oao-ADiRASdgFpIl876H7tl4EHqKoT"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "FTTH-CBFA";  // Replace with your WiFi name
char pass[] = "hari2112@";  // Replace with your WiFi password

#define PIR_SENSOR 4  // GPIO pin connected to PIR OUT

BlynkTimer timer;

void notifyOnTheft() {
  int isTheftAlert = digitalRead(PIR_SENSOR);
  Serial.println(isTheftAlert);

  if (isTheftAlert == HIGH) {  // Motion detected
    Serial.println("Theft Alert in Home");
    Blynk.logEvent("theft_alert", "Theft Alert in Home");
  }
}

void setup() {
  pinMode(PIR_SENSOR, INPUT);
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(5000L, notifyOnTheft);  // Check every 5 seconds
}

void loop() {
  Blynk.run();
  timer.run();
}
