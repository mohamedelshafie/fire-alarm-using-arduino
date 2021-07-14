int sensor = A0;
int buzzeralarm = 4;
int reading;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(buzzeralarm,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
reading = analogRead(sensor);
if (reading>300) {
  digitalWrite(buzzeralarm,HIGH);
  delay(250);
  digitalWrite(buzzeralarm,LOW);
  delay(250);
  digitalWrite(buzzeralarm,HIGH);
  delay(250);
  digitalWrite(buzzeralarm,LOW);
}
}
