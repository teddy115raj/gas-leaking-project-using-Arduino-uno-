int val;
void setup(){
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  val= analogRead(A0);
  if(val>=400){
    digitalWrite(8,HIGH);
    Serial.write("gas lecking \n");
    delay(1000);
  }
  else{
    digitalWrite(8,LOW);
    Serial.write("normal stage\n");
    delay(1000);

  }
}