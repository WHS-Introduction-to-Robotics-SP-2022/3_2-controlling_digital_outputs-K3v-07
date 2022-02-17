

*/

void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  delay(200);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  delay(1000);
  pinMode(8, OUTPUT);
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);
  delay(200);
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);
  delay(3000);
  
}

void loop() {
   digitalWrite(7, HIGH);
   delay(650);
   digitalWrite(7, LOW);
   delay(650);
   digitalWrite(8, HIGH);
   delay(650);
   digitalWrite(8, LOW);
   delay(650);
}
