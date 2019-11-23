int relayPin = 8;
int pirPin = 7;
int ledPin = 13;
int status =0;
int counter = 0;
void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
 // pinMode(pirPin, INPUT);
 pinMode(pirPin, INPUT);
  pinMode(relayPin,  OUTPUT);
  digitalWrite(ledPin, HIGH);
}

void loop(){
  status = digitalRead(pirPin);
  if(status == HIGH)
  {
    counter = counter + 1;
    if(counter % 2 == 0){
     digitalWrite(relayPin,LOW); 
    }else{
      digitalWrite(relayPin,HIGH);
    }
    Serial.println(counter);
  }
  delay(1000);
}
