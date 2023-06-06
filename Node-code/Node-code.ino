#include <WiFi.h>
#include <Grandeur.h>

const char* apiKey = "grandeurldvu507309lg0jkfgrkx8ysi";
const char* deviceId = "devicele9wnwo501n30jnh2fw20zhb";
const char* token = "75ac0f96ac3763e8aab8a506625f6c3952704cb15f0d045f6457598d3edd0e9d";

const char* ssid = "SpeedNet......Farrukh";
const char* passphrase = "786??786";

Grandeur::Project project;
Grandeur::Project::Device device;

void connectWiFi(const char* ssid, const char* passphrase) {
  Serial.print("Connecting with Wifi\n");
  delay(1000);
  Serial.printf("Connecting with ssid %s using passphrase %s.\n", ssid, passphrase);
  //WiFi.disconnect();
  WiFi.begin(ssid, passphrase);
  while(WiFi.status() != WL_CONNECTED) {
    Serial.print("why only this\n");
    
    delay(500);
  }

  Serial.println("Connected with WiFi.");
}

void onConnectionHandler(bool status) {
  switch(status) {
    case CONNECTED:
      Serial.println("Connected with the internet!");
      break;

    case DISCONNECTED:
      Serial.println("Disconnected from the internet!");
      break;
  }
}

void setup() {
  Serial.begin(9600);
  connectWiFi(ssid, passphrase);
  // put your setup code here, to run once:
  project = grandeur.init(apiKey, token);
  device = project.device(deviceId);

  project.onConnection(onConnectionHandler);
}

void loop() {
  if(project.isConnected()) {
    Serial.print("Transmitting Data");
    device.data().set("temp", 12);
    device.data().set("humid", 30);
    device.data().set("air", 92);
    device.data().set("noise", 41);
    delay(1000);
  }

  project.loop();
}
