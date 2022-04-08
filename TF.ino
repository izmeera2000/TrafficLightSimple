/*************************************************************

  Blynk using a LED widget on your phone!

  App project setup:
    LED widget on V1
 *************************************************************/

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

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "OPPORTUNITY";
char pass[] = "12345679";



void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
      digitalWrite(D0, HIGH);
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
}

void loop()
{
  Blynk.run();
  

}

void blinkgreen()
{
    digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec
        digitalWrite(D0, HIGH);//green
    delay(500);
    digitalWrite(D0, LOW);//green
    delay(500);
    //1sec

}

void beeperA()
{
  digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
    digitalWrite(D2,HIGH);
  delay(500);
    digitalWrite(D2,LOW);
  delay(500);
  //1sec
}

void beeperB()
{
  digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
    digitalWrite(D2,HIGH);
  delay(250);
    digitalWrite(D2,LOW);
  delay(250);
  //1sec
}

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();

if(pinValue == 1){
  blinkgreen();
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  beeperA();
  beeperB();
    digitalWrite(D1, LOW);

  }
  else{ 
    digitalWrite(D0, HIGH);
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);

  
  }

}
