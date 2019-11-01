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
    delay(100);
  digitalWrite(led2,HIGH);
    delay(200);
  digitalWrite(led3,HIGH);
  delay(300);
  digitalWrite(led, LOW);
    delay(100);
  digitalWrite (led2, LOW);
    delay(200);
  digitalWrite(led3,LOW);
  delay(300);
}
