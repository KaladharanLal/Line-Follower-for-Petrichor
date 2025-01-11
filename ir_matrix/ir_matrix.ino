int irFLpin = 2;
int irFMpin = 3;
int irFRpin = 4;
int irMLpin = 5;
int irMMpin = 6;
int irMRpin = 7;
int irBLpin = 8;
int irBMpin = 9;
int irBRpin = 10;

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
  // pinMode(irFL, INPUT);
  // pinMode(irFM, INPUT);
  // pinMode(irFR, INPUT);
  // pinMode(irML, INPUT);
  // pinMode(irMM, INPUT);
  // pinMode(irMR, INPUT);
  // pinMode(irBL, INPUT);
  // pinMode(irBM, INPUT);
  // pinMode(irBR, INPUT);
}

void loop() {
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
  // delay(1000);
}
