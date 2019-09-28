
const int triggerpin=2;
const int echopin=4;
//long microsecondsToInches(long);

//long microsecondsTocm(long);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,inches,cm;
  pinMode(triggerpin,OUTPUT);
  digitalWrite(triggerpin,LOW);
  delayMicroseconds(2);
   digitalWrite(triggerpin,HIGH);
  delayMicroseconds(10);
   digitalWrite(triggerpin,LOW);
  pinMode(echopin,INPUT);
  duration=pulseIn(echopin,HIGH);
  inches=microsecondsToinches(duration);
  cm=microsecondsTocm(duration);
  Serial.print("Distance calculator");
  Serial.print("\n");
  Serial.print("inches:");
  Serial.print(inches);
  Serial.print("\n");
  Serial.print("cm");
  Serial.print(cm);
  Serial.print("\n");
  
  delay(2000);
}
long microsecondsToinches(long microseconds)
{
  return microseconds/74/2;
}
long microsecondsTocm(long microseconds)
{
return microseconds/29/2;
}
