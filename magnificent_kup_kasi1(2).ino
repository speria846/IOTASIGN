// C++ code
//
int Red =2;
int yellow =2;
int green=2;
void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode (green, OUTPUT);
}

void loop()
{
  digitalWrite(Red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  delay(1000);// Wait for 1000 millisecond(s)
  digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow,LOW);
    delay(1000);
digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);

}