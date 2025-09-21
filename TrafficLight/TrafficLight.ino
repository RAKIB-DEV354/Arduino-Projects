// C++ code
//


				//Traffic Light
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);


}

void loop()
{
  
  //Imagine as green
 digitalWrite(13,HIGH);
  delay(3000);
  digitalWrite(13,LOW);
   
  //Imagine as yellow
 digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  
  
  //Repeat the code to blink twice
   digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
   
  //Imagine as red
 digitalWrite(8,HIGH);
  delay(3000);
  digitalWrite(8,LOW);
   
  
}