int pinEntrada = 3;
int blue = 5;
int red = 6;
double color_red = 0;
double color_blue = 0;
double i = 0;
double t_min = 10000;
double t_max = 0;
void setup () {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  i = analogRead(pinEntrada);
  i = i*5/1023*1000/10; //Digital value to degrees celsius
  if (i <= t_min) {t_min = i;}
  if (i >= t_max) {t_max = i;}
  color_red = map(i, t_min, t_max, 0, 255);
  color_blue = 255 - color_red;
  analogWrite(red, color_red);
  analogWrite(blue, color_blue);
//  Serial.print(i);
  Serial.println(color_red);
  //delay(1000);
}
