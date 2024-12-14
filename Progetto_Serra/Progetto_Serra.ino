/*********
  Rui Santos & Sara Santos - Random Nerd Tutorials
  Complete project details at https://RandomNerdTutorials.com/esp32-esp8266-plot-chart-web-server/
  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files.
*********/
  #include <WiFi.h>
  #include <ESPAsyncWebServer.h>
  #include <LittleFS.h>
  #include <Wire.h>

/*PINOUT: 
G34= umidità sensor
G35= luminosità


*/
// ANALOG READ///////////////////// 
const int potPin_Humidity = 34;
const int potPin_Light = 35; 

// variable for storing the sensor value
int potValue_H = 0;
int potValue_L = 0;
int outputValue = 0;
///////////////////////////////////
// Replace with your network credentials
const char* ssid = "TP-Link_FA0A";
const char* password = "avantisavoia";
// Create AsyncWebServer object on port 80
AsyncWebServer server(80);
//Umidità
String readHumidity() {
  float h = analogRead(potPin_Humidity);
  float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(outputValue)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(outputValue);
    return String(outputValue);
  }
}

//Luce/////////////////////////////
String readLight() {
  float l = analogRead(potPin_Light);
  if (isnan(l)) {
    Serial.println("Failed to read from Light sensor!");
    return "";
  }
  else {
    Serial.println(l);
    return String(l);
  }
}
/////////////////////////////////////
void setup(){
  // Serial port for debugging purposes
  Serial.begin(115200);
  
  bool status; 
  // Initialize LittleFS
  if(!LittleFS.begin()){
    Serial.println("An Error has occurred while mounting LittleFS");
        return;
  }

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }

  // Print ESP32 Local IP Address
  Serial.println(WiFi.localIP());

  // Route for root / web page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/index.html");
  });
  server.on("/temperature", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readLight().c_str());
  });
  server.on("/humidity", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity().c_str());
  });
  server.on("/pressure", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity().c_str());
  });

  // Start server
  server.begin();
}
 
void loop(){
  // Reading sensor value//////////////////
  potValue_H = analogRead(potPin_Humidity);
  potValue_L = analogRead(potPin_Light);
  //Serial.println(potValue);
  delay(100);
  /////////////////////////////////////////
}
