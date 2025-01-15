int irF1pin = 2;
int irF2pin = 3;
int irMMpin = 4;
int irB2pin = 5;
int irB1pin = 6;
int irL1pin = 7;
int irL2pin = 8;
int irR2pin = 10;
int irR1pin = 12;

bool irF1 = false;
bool irF2 = false;
bool irMM = false;
bool irB2 = false;
bool irB1 = false;
bool irL1 = false;
bool irL2 = false;
bool irR2 = false;
bool irR1 = false;

void setup() {
  Serial.begin(9600);
  pinMode(irF1pin, INPUT);
  pinMode(irF2pin, INPUT);
  pinMode(irMMpin, INPUT);
  pinMode(irB2pin, INPUT);
  pinMode(irB1pin, INPUT);
  pinMode(irL1pin, INPUT);
  pinMode(irL2pin, INPUT);
  pinMode(irR2pin, INPUT);
  pinMode(irR1pin, INPUT);
}

void loop() {
  irF1 = digitalRead(irF1pin);
  irF2 = digitalRead(irF2pin);
  irMM = digitalRead(irMMpin);
  irB2 = digitalRead(irB2pin);
  irB1 = digitalRead(irB1pin);
  irL1 = digitalRead(irL1pin);
  irL2 = digitalRead(irL2pin);
  irR2 = digitalRead(irR2pin);
  irR1 = digitalRead(irR1pin);

  Serial.print("  ");
  if(irF1){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  Serial.println("  ");
  
  Serial.print("  ");
  if(irF2){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  Serial.println("  ");
 
  Serial.print(" ");
  if(irL1){
    Serial.print("1");
  }else{
    Serial.print("0");
  }
  if(irL2){
    Serial.print("1");
  }else{
    Serial.print("0");
  }
  if(irMM){
    Serial.print("1");
  }else{
    Serial.print("0");
  }
  if(irR2){
    Serial.print("1");
  }else{
    Serial.print("0");
  }
  if(irR1){
    Serial.print("1");
  }else{
    Serial.print("0");
  }
  Serial.println("");

  Serial.print("  ");
  if(irB2){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  Serial.println("  ");
  
  Serial.print("  ");
  if(irB1){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  Serial.println("  ");
  

  Serial.println("");
  delay(500);
}
