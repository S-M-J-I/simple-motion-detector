#include <SoftwareSerial.h>
#define SENSOR 8
#define LED 12
SoftwareSerial Bluetooth(2,3); // RX | TX
char incoming = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SENSOR) == HIGH){
    digitalWrite(LED, HIGH);
    incoming = Bluetooth.read();
    if(incoming == '1'){
      digitalWrite(LED, LOW);
    }
  }
  delay(500);
}
