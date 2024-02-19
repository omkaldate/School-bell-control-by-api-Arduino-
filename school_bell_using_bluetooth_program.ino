
int bell =5;
char input=0;

void setup() {
Serial.begin(9600);
pinMode(bell , OUTPUT);
}

void loop() {
 while(Serial.available() ){
  delay(50);
  input = Serial.read();
}

if(input =='m'){
  digitalWrite(bell , HIGH);
 }
 if(input =='k'){
  digitalWrite(bell , LOW);
}
}
