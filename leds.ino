int led = 13;
int led2 = 8;
int led3 = 3;


void setup() {
 pinMode (led, OUTPUT);
 pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
}

void loop() {
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  digitalWrite (led2, LOW);
  digitalWrite(led3,LOW);
  delay(3000);
}
