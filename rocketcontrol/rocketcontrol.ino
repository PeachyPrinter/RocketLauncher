const int BUTTON = 7;
const int INTERUPT =  6;
const int EMPTY =  5; 
const int LAUNCH =  4; 
const int SNIP =  3; 
const int SNIP_DELAY = 10;
 
void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(INTERUPT, INPUT);
  pinMode(EMPTY, OUTPUT);
  pinMode(LAUNCH, OUTPUT);
  pinMode(SNIP, OUTPUT);
  digitalWrite(EMPTY, LOW);
  digitalWrite(LAUNCH, LOW);
  digitalWrite(SNIP, LOW);
}

void loop() {
  if (digitalRead(BUTTON) == HIGH) {
    digitalWrite(LAUNCH, HIGH);
    while (digitalRead(INTERUPT) == HIGH) {
    }
    digitalWrite(EMPTY, HIGH);
    delay(SNIP_DELAY);
    digitalWrite(SNIP, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(EMPTY, LOW);
    digitalWrite(LAUNCH, LOW);
    digitalWrite(SNIP, LOW);
  }
}