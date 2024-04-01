int sensor = 3;
int nyala = HIGH;
int mati = LOW;
int val = 0;
int relay = 2;
const byte relayOnState = LOW;
const byte relayOffState = HIGH;
const int audio = 4;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(relay, OUTPUT);
  pinMode(audio, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(sensor);
  digitalWrite(relay, relayOnState);
  if (val == 1) {
    digitalWrite(relay, relayOnState);
    digitalWrite(audio, HIGH);
    Serial.println(val);
    delay(10000);
  } else {
    Serial.println(val);
    digitalWrite(led, LOW);
    digitalWrite(audio, LOW);
    digitalWrite(relay, relayOffState);
    delay(1000);
  }
  delay(1);
}