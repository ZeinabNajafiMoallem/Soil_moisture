
int Signal = 12;

void setup() {
  // put your setup code here, to run once:

  pinMode(12,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int sensor = analogRead(A0);
  //Serial.print("digital value is: ");
  //Serial.println(sensor);
  if(sensor > 700){
    Serial.print("need water!");
    digitalWrite(12,HIGH);
    //delay(500);
  }
  else{
    Serial.print("enough water!");
    digitalWrite(12,LOW);
    //delay(500);
  }
  delay(500);

}
