int relay = 2;
int x;

void setup() {

pinMode(relay, OUTPUT);
Serial.begin(9600);

}

void loop() {

if (Serial.available() > 0) {

x = Serial.read();

switch (x) {
case âaâ: 
digitalWrite(relay, HIGH);
break;
case âbâ: 
digitalWrite(relay, LOW);
break;

}

}

      }
