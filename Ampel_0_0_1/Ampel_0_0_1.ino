#define DELAY1 10000
#define DELAY2 2000
#define DELAY3 3000

int ledPinAutoRot = 7;
int ledPinAutoGelb = 6;
int ledPinAutoGruen = 5;

int ledPinFussRot = 3;
int ledPinFussGruen = 2;

int tasterPinAmpel = 8;
int tasterAmpelWert = LOW;

void setup() {
  pinMode(ledPinAutoRot, HIGH);
  pinMode(ledPinAutoGelb, HIGH);
  pinMode(ledPinAutoGruen, HIGH);
  
  pinMode(ledPinFussRot, HIGH);
  pinMode(ledPinFussGruen, HIGH);
  
  /*********************************/
  digitalWrite(ledPinAutoRot, LOW);
  digitalWrite(ledPinAutoGelb, LOW);
  digitalWrite(ledPinAutoGRUEN, LOW);
  
  digitalWrite(ledPinFussRot, LOW);
  digitalWrite(ledPinFussGruen, LOW);
}

void loop() {
  digitalWrite(ledPinAutoRot, HIGH);
  digitalWrite(ledPinFussGruen, HIGH);
  delay(10000);
  digitalWrite(ledPinFussGruen, LOW);
  digitalWrite(ledPinFussRot, HIGH);
  delay(1000);
  digitalWrite(ledPinAutoGelb, HIGH);
  delay(2000);
  digitalWrite(ledPinAutoRot, LOW);
  digitalWrite(ledPinAutoGelb, LOW);
  digitalWrite(ledPinAutoGruen, HIGH);
  delay(10000);
  digitalWrite(ledPinAutoGruen, LOW);
  digitalWrite(ledPinAutoGelb, HIGH);
  delay(2000);
  digitalWrite(ledPinAutoGelb, LOW);
  delay(1000);
  digitalWrite(ledPinFussRot, LOW);
  digitalWrite(ledPinFussGruen, HIGH);
}
