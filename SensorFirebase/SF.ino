#include "DHT.h"

#define DHTPIN D4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#define FIREBASE_HOST "automatic-dog-house.firebaseio.com"
#define FIREBASE_AUTH "wClxocTb5YsVM6ApjoQVhNRXdDspqchYyG7KgtjS"

const char* ssid     = "airchang";
const char* password = "76357635";


void setup() {
  Serial.begin(115200);
  delay(10);
  
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
}

void loop() {
  delay(1000);
 
  float t = dht.readTemperature();
  
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C ");
  
  if (isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
    
  }

  Firebase.setFloat("DHT_Value/Temperature", t);
  
  if (Firebase.failed()) {
      Serial.print("Temperature/Temperature failed:");
      Serial.println(Firebase.error());
      return;
  }
}
