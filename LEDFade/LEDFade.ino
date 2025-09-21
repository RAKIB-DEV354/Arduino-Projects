// C++ code
//
int pin = 11;
void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  
  for(int i=0;i<=255;i++){
  analogWrite(pin,i);
    delay(5);
  }
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  for(int i=255;i>=0;i--){
  analogWrite(pin, i);
    delay(5);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}