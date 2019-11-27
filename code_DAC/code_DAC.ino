void setup(){

 Serial.begin(9600);
 
}

void loop(){

  int sensorValue = analogRead(AO);

  Serial.println(sensorValue);

  analogWrite(12,map (sensorValue, ,0 ,1023, 0, 255))

  delay(10);
}
