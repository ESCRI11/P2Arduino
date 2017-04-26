int pinEntrada = 3;
double i = 0;
void setup () {
  Serial.begin(9600);
}

void loop () {
  i = analogRead(pinEntrada);
  Serial.print(i*5/1024*1000/10); //Digital value to degrees celsius
  Serial.println('C');
  delay(1000);
}
