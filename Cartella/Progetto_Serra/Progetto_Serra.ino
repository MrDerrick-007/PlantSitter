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
const int potPin_Humidity1 = 34; //sensore 1 
const int potPin_Humidity2 = 35; //sensore 2
const int potPin_Humidity3 = 32; //sensore 3
const int potPin_Humidity4 = 23; //sensore 4
const int potPin_Humidity5 = 25; //sensore 5
const int potPin_Humidity6 = 26; //sensore 6
const int potPin_Humidity7 = 2;  //sensore 7
const int potPin_Humidity8 = 1;  //sensore 8
const int potPin_Humidity9 = 66; //sensore 9

const int potPin_Light = 90; //sensore 6

// variable for storing the sensor value
int potValue_H = 0;
int potValue_L = 0;
int outputValue = 0;
//////////////////////////////////

///////////////////////////////////


// Replace with your network credentials
const char* ssid = "TP-Link_FA0A";
const char* password = "avantisavoia";
// Create AsyncWebServer object on port 80
AsyncWebServer server(80);


//Umidità
String readHumidity() {

  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity1);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(total)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(average);
    return String(average);
  }
}

//Percentuale_Umidità 6
String readHumidity6() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity9);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 1.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}


//Percentuale_Umidità 2
String readHumidity2() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity2);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 1.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}


//Percentuale_Umidità 1/////////////////////////////////////
String readHumidity1() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity1);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 1.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}
////////////////////////////////////////////////////////////////////

//Percentuale_Umidità 7/////////////////////////////////////
String readHumidity7() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity7);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 1.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}
////////////////////////////////////////////////////////////////////


//Percentuale_Umidità 8/////////////////////////////////////
String readHumidity8() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity8);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 2.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}
////////////////////////////////////////////////////////////////////

//Percentuale_Umidità 5/////////////////////////////////////
String readHumidity5() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity5);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 1.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}
////////////////////////////////////////////////////////////////////


//Percentuale_Umidità 4/////////////////////////////////////
String readHumidity4() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity4);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 1.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}



////////////////////////////////////////////////////////////////////


//Percentuale_Umidità 3 WEARD/////////////////////////////////////
String readHumidity3() {
  const int numSamples = 20; //num campioni
  float total = 0; //variabile di accumulo
  
  for ( int i = 0; i < numSamples; i++){
  float h = analogRead(potPin_Humidity3);
  total = total + h;
  delay(100);
  }
  float average = total / numSamples;
  float per = ((2687 - average) * 0.0622)+ 1.30; 
  //float outputValue = map(h, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  if (isnan(per)) {
    Serial.println("Failed to read from Humidity sensor!");
    return "";
  }
  else {
    Serial.println(per);
    return String(per);
  }
}
////////////////////////////////////////////////////////////////////


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
  
  server.on("/plant1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/plant1.jpg");
  });  

  server.on("/plant2", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/plant2.jpg");
  }); 

  server.on("/plant3", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/plant3.jpg");
  });  


  server.on("/plant4", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/plant4.jpg");
  });  


  server.on("/plant5", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/plant5.jpg");
  });  


  server.on("/plant6", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/plant6.jpg");
  });  


  server.on("/plant7", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(LittleFS, "/plant7.jpg");
  });   

  server.on("/temperature", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity4().c_str());
  });

  server.on("/humidity", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity4().c_str());
  });


  server.on("/a", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity1().c_str());
  });

    server.on("/b", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity2().c_str());
  });

    server.on("/c", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity3().c_str());
  });


    server.on("/pianta4", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity4().c_str());
  });

    server.on("/pianta5", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity5().c_str());
  });


    server.on("/pianta6", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHumidity6().c_str());
  });

  // Start server
  server.begin();
}
 
void loop(){
  //Parte per fare la media dei campioni, voglio meno varianza//////
  /////////////////////////////////////////////////////////////////
  // Reading sensor value//////////////////
  potValue_H = analogRead(potPin_Humidity1);
  potValue_L = analogRead(potPin_Light);
  //Serial.println(potValue);
  delay(200);
  /////////////////////////////////////////
}
