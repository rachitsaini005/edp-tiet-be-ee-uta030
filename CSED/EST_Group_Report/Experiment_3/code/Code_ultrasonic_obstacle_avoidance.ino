#include <NewPing.h>

int t1 = A0;
int t2 = A2;
int pin5 = 5;
int pin6 = 6;
int pin7 = 8;
int pin8 = 7;
int TRIGGER_PIN = 13;
int ECHO_PIN = 12;
int MAX_DISTANCE = 200;
int irPin = 4;
int flag = 0;
int gantryCounter = 0;
int inside = 0;
static long StartTime = 0;
long intervalU = 500;
static long StartTimeG = millis();
static long CurrentTimeG = 0;
static long ElapsedTimeG = 0;
long previousMillisU = millis();
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
unsigned long d = 0;

void setup() {
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  Serial.begin(9600);
}
