#define m1a A0
#define m1b A1
#define m2a A2
#define m2b A3

#define m1s 9
#define m2s 11

#define irFLpin 2
#define irFMpin 3
#define irFRpin 4
#define irMLpin 5
#define irMMpin 6
#define irMRpin 7
#define irBLpin 8
#define irBMpin 10
#define irBRpin 12

bool irFL = false;
bool irFM = false;
bool irFR = false;
bool irML = false;
bool irMM = false;
bool irMR = false;
bool irBL = false;
bool irBM = false;
bool irBR = false;

void setup() {
  Serial.begin(9600);

  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
}

void loop() {
  updateIR();
  
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, HIGH); 
  
  analogWrite(m1s, 100);
  analogWrite(m2s, 100); 
}

void updateIR(){
  irFL = digitalRead(irFLpin);
  irFM = digitalRead(irFMpin);
  irFR = digitalRead(irFRpin);
  irML = digitalRead(irMLpin);
  irMM = digitalRead(irMMpin);
  irMR = digitalRead(irMRpin);
  irBL = digitalRead(irBLpin);
  irBM = digitalRead(irBMpin);
  irBR = digitalRead(irBRpin);

  if(irFL){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  if(irFM){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  if(irFR){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  Serial.println("");
  
  if(irML){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  if(irMM){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  if(irMR){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  Serial.println("");
  
  if(irBL){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  if(irBM){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  if(irBR){
    Serial.print(" 1 ");
  }else{
    Serial.print(" 0 ");
  }
  Serial.println("");

  Serial.println("");
}