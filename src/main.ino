int pinEntrada = 3;
int blue = 5;
int red = 6;
double color_red = 0;
double color_blue = 0;
double i = 0;
void setup () {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  i = analogRead(pinEntrada);
  i = i*5/1023*1000/10; //Digital value to degrees celsius
  color_red = i*32;
  color_blue = 256 - color_red;
  digitalWrite(red, color_red);
  digitalWrite(blue, color_blue);
  Serial.println(color_red);
  delay(1000);
}
