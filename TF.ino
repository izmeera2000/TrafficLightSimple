

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




#define RPIN D0
#define VRPIN V5
#define GPIN D1
#define VGPIN V4
#define BUZZ D6
int state = 0;


void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

  pinMode(RPIN, OUTPUT);//r
  pinMode(GPIN, OUTPUT);//g
  pinMode(BUZZ, OUTPUT);//buzzer

  digitalWrite(GPIN, HIGH);
  digitalWrite(RPIN, LOW);
  digitalWrite(BUZZ, LOW);
}




BLYNK_WRITE(V0)//cancel
{
  int value0 = param.asInt(); // Get value as integer
  if (value0 == 1 )
  { state = 0;
    Serial.print(state);
  }
}
BLYNK_WRITE(V1)// 7m
{
  int value1 = param.asInt(); // Get value as integer
  if (value1 == 1 )
  { state = 1;
    Serial.print(state);
  }
}
BLYNK_WRITE(V2)// 14m
{
  int value2 = param.asInt(); // Get value as integer
  if (value2 == 1 )
  { state = 2;
    Serial.print(state);
  }
}
BLYNK_WRITE(V3)// 21m
{
  int value3 = param.asInt(); // Get value as integer
  if (value3 == 1 )
  { state = 3;
    Serial.print(state);
  }
}
void cancel()
{
  state = 0;

  digitalWrite(GPIN, HIGH);
  digitalWrite(RPIN, LOW);
  digitalWrite(BUZZ, LOW);
}

void start7()
{ for ( int i = 0 ; i < 10; i++)
  {
    if (state == 1) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(GPIN, LOW);
      delay(500);
      digitalWrite(GPIN, HIGH);
      delay(500);
    }
  }
  if (state == 1)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(GPIN, LOW);

  }
  if (state == 1)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(RPIN, HIGH);

  }
  for ( int i = 0 ; i < 20; i++)
  {
    if (state == 1) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(BUZZ, HIGH);

      delay(500);
      digitalWrite(BUZZ, LOW);

      delay(500);
    }
  }
  for ( int i = 0 ; i < 20; i++)
  {
    if (state == 1) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(BUZZ, HIGH);

      delay(250);
      digitalWrite(BUZZ, LOW);

      delay(250);
    }
  }
  if (state == 1)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(RPIN, LOW);

  }


  state = 0;
}

void start14()
{ for ( int i = 0 ; i < 10; i++)
  {
    if (state == 2) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(GPIN, LOW);
      delay(500);
      digitalWrite(GPIN, HIGH);
      delay(500);
    }
  }
  if (state == 2)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(GPIN, LOW);

  }
  if (state == 2)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(RPIN, HIGH);

  }
  for ( int i = 0 ; i < 50; i++)
  {
    if (state == 2) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(BUZZ, HIGH);

      delay(500);
      digitalWrite(BUZZ, LOW);

      delay(500);
    }
  }
  for ( int i = 0 ; i < 20; i++)
  {
    if (state == 2) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(BUZZ, HIGH);

      delay(250);
      digitalWrite(BUZZ, LOW);

      delay(250);
    }
  }
  if (state == 2)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(RPIN, LOW);

  }


  state = 0;
}


void start21()
{ for ( int i = 0 ; i < 10; i++)
  {
    if (state == 3) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(GPIN, LOW);
      delay(500);
      digitalWrite(GPIN, HIGH);
      delay(500);
    }
  }
  if (state == 3)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(GPIN, LOW);

  }
  if (state == 3)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(RPIN, HIGH);

  }
  for ( int i = 0 ; i < 80; i++)
  {
    if (state == 3) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(BUZZ, HIGH);

      delay(500);
      digitalWrite(BUZZ, LOW);

      delay(500);
    }
  }
  for ( int i = 0 ; i < 20; i++)
  {
    if (state == 3) {


      Blynk.syncVirtual(V0, V1, V2, V3);
      digitalWrite(BUZZ, HIGH);

      delay(250);
      digitalWrite(BUZZ, LOW);

      delay(250);
    }
  }
  if (state == 3)
  {
    Blynk.syncVirtual(V0, V1, V2, V3);
    digitalWrite(RPIN, LOW);

  }


  state = 0;
}

void loop()
{
  Blynk.run();
  if (state == 0)cancel();
  if (state == 1)start7();
  if (state == 2)start14();
  if (state == 3)start21();
}
