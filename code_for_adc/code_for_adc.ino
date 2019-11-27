void setup(){

 Serial.begin(9600);
 
}

void loop(){

  int sensorValue = analogRead(AO);

  Serial.println(sensorValue);

  delay(10);
}
