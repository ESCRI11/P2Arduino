int pinEntrada = 3;
int i = 0;
void setup () {
  pinMode(pinEntrada, INPUT);
  Serial.begin(9600);
}

void loop () {
  i = analogRead(pinEntrada);
  Serial.println(i); // Should be 675
}
