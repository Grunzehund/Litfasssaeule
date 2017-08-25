#include "allinc.h"
#ifdef DEBUG
  unsigned long int delta1, delta2;
#endif

ESP8266WebServer WebServer(80);
anzeige a(DISPLAY_WIDTH, DISPLAY_HEIGHT, CNT_ARMS,  LATCH, CLOCK, DATA);
unsigned long int micros_old, micros_duration_turn, micros_begin_last_turn;
int select;

#include "functions.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); /* initialize the Serial monitor */
  randomSeed(12084);    /* random seed */
  a.setAll(0);          /* sets all Pixels to off ---> create a white Paper to draw */
  
  #ifndef DEBUG
    Serial.println(F("Started"));
    Serial.println(F("Testing the anzeige-Class"));
    Serial.print(F("The perfect Speed is: "));
    Serial.println(DELAY_TIME);
  #endif

  WiFi.mode(WIFI_AP);               /* WiFi-Mode is Access-Point  */
  WiFi.softAP(OWN_SSID, OWN_PSK);   /* initializing WiFi with ssid and psk */
  
  WebServer.on("/", start);               /* if $(IP)/ is called ------> function start */
  WebServer.on("/set.html", doStuff);     /* if $(IP)/set.html is called ------> function doStuff*/
  WebServer.on("/specs.html", specs);     /* if $(IP)/specs.html is called ------> function specs.html */
  WebServer.on("/setApp.html", setTest);  /* if $(IP)/setApp is called ------> function setTest */
  WebServer.onNotFound(notFound);         /* if $(IP)/(Anything else) is called ------> function notFound */
  WebServer.begin();                      /* starting */
  
  micros_old = micros();
  setupInterrupt();
}

void loop() {
  // put your main code here, to run repeatedly:
  WebServer.handleClient();
  loopInterrupt();
}
