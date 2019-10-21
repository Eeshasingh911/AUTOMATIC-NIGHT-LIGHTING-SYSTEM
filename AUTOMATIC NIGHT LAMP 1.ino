int sensorPin=A0;
int ledPin=7;
int sensorValue=0;
void setup(){
  Serial.begin(9600);
  pinMode(7,OUTPUT); 
}

void loop(){
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  
  delay(100);
  if(sensorValue>300)
  {
    digitalWrite(7,HIGH);
}
 else
 {
  digitalWrite(7,LOW);
 }
}   