const int LDR = 0;
const int Led = 6;
int valorLido = 0;
int pwm = 0;
int valorSombra = 300;

void setup(){
  pinMode(Led,OUTPUT);
}

void loop(){
  valorLido = analogRead(LDR);
  
  if(valorLido < valorSombra){
    analogWrite(Led,pwm);
    pwm++;
    delay(100);
  }
  else{
    digitalWrite(Led,LOW);
    pwm=0;
  }
  
  if(pwm > 255){
    pwm = 255;
  }
}
