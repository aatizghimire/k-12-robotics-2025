



void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
     pinMode(8,INPUT);
      pinMode(9,INPUT);
       pinMode(10,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  bool LEDY = digitalRead(8);
    bool LEDG = digitalRead(9);
  bool LEDW = digitalRead(10);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  
  
  if (LEDY == HIGH){
  digitalWrite(2,HIGH);
  delay(100);}
  else if (LEDG==HIGH){
    digitalWrite(3,HIGH);}
    else if  (LEDW == HIGH){
    digitalWrite(4, HIGH);
    }
    else{
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
       digitalWrite(4,LOW);
       
  }
  delay(500);
}
