#define m1a A1
#define m1b A0
#define m2a A3
#define m2b A2

#define m1s 9
#define m2s 11

#define irF1pin 2
#define irF2pin 3
#define irMMpin 4
#define irB2pin 5
#define irB1pin 6
#define irL1pin 7
#define irL2pin 8
#define irR2pin 10
#define irR1pin 12

bool irF1 = false;
bool irF2 = false;
bool irMM = false;
bool irB2 = false;
bool irB1 = false;
bool irL1 = false;
bool irL2 = false;
bool irR2 = false;
bool irR1 = false;

int speed = 255;
int slowSpeed = 180;
int updateTime = 10;

void move(int s=speed, float rotate=0, bool back=false);
// rotate -100-0 left anf 0-100 right
void turn(bool right, int s=slowSpeed);

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

  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
}

void loop() {
  updateIR();
  


  if(irF1 && irF2 && irL1 && irL2)
  {
    turn(false, speed);
  }
  else if(irF1 && irF2){
    move(speed);
  }
  else if(irF1){
    move(slowSpeed);
  }
  else if(irF2 || irMM){
    move(slowSpeed);
  }
  else if(irR1)
  {
    move(speed, 100);
    Serial.println("Right");
  }
  else if(irL1)
  {
    move(speed, -100);
    Serial.println("Left");
  }
  else if(irR2)
  {
    move(speed, 100);
    Serial.println("Right");
  }
  else if(irL2)
  {
    move(speed, -100);
    Serial.println("Left");
  }
  else if(!irF1 && !irF2 && !irMM && !irB2 && !irB1 && !irL1 && !irL2 && !irR2 && !irR1)
  {
    move(speed, 0, true);
  }else if(irB1 || irB2)
  {
    turn(false, speed);
  }


  // move(speed, 0);

  // delay(300);
  
  
  // analogWrite(m1s, 100);
  // analogWrite(m2s, 100); 
}

// void correct(bool right, bool second)
// {

// }

void move(int s=speed, float rotate=0, bool back=false)
{
  if(rotate<0)
  {
    analogWrite(m1s, s*(1+rotate/100));
    analogWrite(m2s, s); 
  }else
  {
    analogWrite(m1s, s);
    analogWrite(m2s, s*(1-rotate/100)); 
  }
  
  
  if(!back)
  {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
  }else{
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH);
  }
  

  delay(updateTime);

  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}

void turn(bool right, int s=slowSpeed)
{
  analogWrite(m1s, s);
  analogWrite(m2s, s); 

  if(right)
  {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH);
  }else{
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
  }
  

  delay(updateTime);

  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}

void updateIR()
{
  irF1 = !digitalRead(irF1pin);
  irF2 = !digitalRead(irF2pin);
  irMM = !digitalRead(irMMpin);
  irB2 = !digitalRead(irB2pin);
  irB1 = !digitalRead(irB1pin);
  irL1 = !digitalRead(irL1pin);
  irL2 = !digitalRead(irL2pin);
  irR2 = !digitalRead(irR2pin);
  irR1 = !digitalRead(irR1pin);

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
}