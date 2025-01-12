// #define m1a 5
// #define m1b 6
// #define m2a 7
// #define m2b 8

#define m1s 9
#define m2s 11

#define m1a A0
#define m1b A1
#define m2a A2
#define m2b A3

// #define m1s A4
// #define m2s A5


void setup() {
  // put your setup code here, to run once:
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(m1a, HIGH);
  // digitalWrite(m1b, LOW);
  // digitalWrite(m2a, HIGH);
  // digitalWrite(m2b, LOW);
  // delay(3000);
  // digitalWrite(m1a, LOW);
  // digitalWrite(m1b, LOW);
  // digitalWrite(m2a, LOW);
  // digitalWrite(m2b, LOW);
  // delay(700);
  
  // analogWrite(m1s, 255);
  // analogWrite(m2s, 128);


  // digitalWrite(m1a, LOW);
  // digitalWrite(m1b, HIGH);
  // digitalWrite(m2a, LOW);
  // digitalWrite(m2b, HIGH);
  // delay(3000);
  // digitalWrite(m1a, LOW);
  // digitalWrite(m1b, LOW);
  // digitalWrite(m2a, LOW);
  // digitalWrite(m2b, LOW);
  // delay(700);
  
  // analogWrite(m1s, 255);
  // analogWrite(m2s, 128);

  
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, HIGH); 
  
  analogWrite(m1s, 100);
  analogWrite(m2s, 100); 
}
