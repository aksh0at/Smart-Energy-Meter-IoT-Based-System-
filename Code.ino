#include <WiFi.h>
#include <WebServer.h>
#include <PZEM004Tv30.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";

PZEM004Tv30 pzem(Serial2,16,17);
WebServer server(80);

float voltage,current,power,energy,frequency,pf;

void handleRoot()
{
String html="<!DOCTYPE html><html><head>";
html+="<meta http-equiv='refresh' content='2'>";
html+="<title>Smart Energy Meter</title></head><body>";
html+="<h2>ESP32 Smart Energy Meter</h2>";

html+="Voltage : "+String(voltage)+" V<br>";
html+="Current : "+String(current)+" A<br>";
html+="Power : "+String(power)+" W<br>";
html+="Energy : "+String(energy)+" kWh<br>";
html+="Frequency : "+String(frequency)+" Hz<br>";
html+="Power Factor : "+String(pf)+"<br>";

html+="</body></html>";

server.send(200,"text/html",html);
}

void setup()
{
Serial.begin(115200);

Serial2.begin(9600,SERIAL_8N1,16,17);

WiFi.begin(ssid,pass);

while(WiFi.status()!=WL_CONNECTED)
{
delay(500);
}

Blynk.begin(auth,ssid,pass);

server.on("/",handleRoot);

server.begin();
}

void loop()
{

Blynk.run();
server.handleClient();

voltage=pzem.voltage();
current=pzem.current();
power=pzem.power();
energy=pzem.energy();
frequency=pzem.frequency();
pf=pzem.pf();

Blynk.virtualWrite(V0,voltage);
Blynk.virtualWrite(V1,current);
Blynk.virtualWrite(V2,power);
Blynk.virtualWrite(V3,energy);
Blynk.virtualWrite(V4,frequency);
Blynk.virtualWrite(V5,pf);

delay(2000);

}
