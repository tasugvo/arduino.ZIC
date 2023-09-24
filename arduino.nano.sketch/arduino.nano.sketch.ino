const int pinoD5 = 6;
const int pinoD7 = 8;
const int pinoD8 = 9;

void setup() {
  pinMode(pinoD5, INPUT);
  pinMode(pinoD7, OUTPUT);
  pinMode(pinoD8, OUTPUT);

  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  int stateD5 = digitalRead(pinoD5);

  if(stateD5 == HIGH){
    delay(60000);
    digitalWrite(pinoD7, HIGH);//ptt
    digitalWrite(pinoD8, HIGH);//playL
    digitalWrite(LED_BUILTIN, HIGH);
    delay(11000);
    digitalWrite(pinoD7, LOW);//ptt
    digitalWrite(pinoD8, LOW);//playL
    digitalWrite(LED_BUILTIN, LOW);
  }

}
