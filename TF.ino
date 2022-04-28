

// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID           "TMPLl6VrdVrZ"
#define BLYNK_DEVICE_NAME           "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "7-dCZt5TJWxwlCS4asjbkcPVum01Ke-M"
// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "OPPORTUNITY";
char pass[] = "12345679";


BlynkTimer timer;

void setup()
{
  // Debug console
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(16, OUTPUT);//g
  pinMode(5, OUTPUT);//r
  pinMode(4, OUTPUT);//buzzer
  digitalWrite(16, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
}

void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V2, millis() / 1000);
}

void loop()
{ Blynk.run();
timer.run();
  
}

void slowbeep(int y)
{
  for (int i = y ; i >= 0 ; i--) {
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    delay(500);
  }
}

void fastbeep(int z)
{
  for (int i = z ; i >= 0 ; i--) {
    digitalWrite(4, HIGH);
    delay(250);
    digitalWrite(4, LOW);
    delay(250);
  }
}


void greenlblink(int x)
{
  for (int i = x ; i >= 0 ; i--) {
    digitalWrite(16, HIGH);//green
      Blynk.virtualWrite(V6, HIGH);

    delay(500);
    digitalWrite(16, LOW);//green
          Blynk.virtualWrite(V6, LOW);

    delay(500);
  }
}

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();



  if (pinValue == 1) {
  timer.setInterval(1000L, myTimerEvent);

    greenlblink(10);
    digitalWrite(16, LOW);
          Blynk.virtualWrite(V6, LOW);

    digitalWrite(5, HIGH);
              Blynk.virtualWrite(V5, HIGH);

    slowbeep(20);
    fastbeep(10);
    digitalWrite(5, LOW);
  }
  else {
    digitalWrite(16, HIGH);
                  Blynk.virtualWrite(V6, HIGH);

    digitalWrite(5, LOW);
              Blynk.virtualWrite(V5, LOW);

    digitalWrite(4, LOW);


  }

}

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();

  if (pinValue == 1) {

    greenlblink(10);
    digitalWrite(16, LOW);
    digitalWrite(5, HIGH);
    slowbeep(50);
    fastbeep(10);
    digitalWrite(5, LOW);
  }
  else {
    digitalWrite(16, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);


  }

}
BLYNK_WRITE(V2)
{
  int pinValue = param.asInt();

  if (pinValue == 1) {

    greenlblink(10);
    digitalWrite(16, LOW);
    digitalWrite(5, HIGH);
    slowbeep(80);
    fastbeep(10);
    digitalWrite(5, LOW);
  }
  else {
    digitalWrite(16, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);


  }

}
