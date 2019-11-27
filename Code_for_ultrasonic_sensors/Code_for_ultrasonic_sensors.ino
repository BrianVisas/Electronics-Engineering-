const int trigPin = 22;
const int echoPin = 30;

long duration;
double distance;
int i=0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop(){

  for (; i<10; i++) {
    
  
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration*0.034/2;

  Serial.print("Distance: ");
  Serial.println(distance);
  }
}

  
