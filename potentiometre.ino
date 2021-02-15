int pot = A0;
int led = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valeurpot = analogRead(pot);
  Serial.println(valeurpot);
  int valeurled = map(valeurpot, 0, 1023, 0, 255);
  analogWrite(led, valeurled);
}
