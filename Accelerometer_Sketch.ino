/*
Accelerometer Sketch
Simple sketch to output values on the x and y axis
*/

const int xPin = 0;
const int yPin = 1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int xValue;
  int yValue;
  
  xValue = analogRead(xPin);
  yValue = analogRead(yPin);
  
  Serial.print("X value = ");
  Serial.println(xValue);
  Serial.print("Y value = ");
  Serial.println(yValue);
  delay(100);
}

