const int r=3;//red led pin
const int g=6;//green led pin
const int b=5;//blue led pin
int s=0;//step of program
int len=4;//length of program

char seq[][4] = { 
  {255,255, 0, 0},  //r-channel sequence
  {255,0,255,0},  //g-channel sequence
  {120,0,0,255}   //b-channel sequence
};

void setup() {
  // put your setup code here, to run once:

  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);  
}

void loop() {
  // put your main code here, to run repeatedly:
    
  if(s>=len){
    s=0;
  }
  
  analogWrite(r,seq[0][s]);
  analogWrite(g,seq[1][s]);
  analogWrite(b,seq[2][s]);    
    

  s++;

  delay(2000);


}
