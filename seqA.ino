// definir e/s

const int l1 = 0;
const int l2 = 1;
const int l3 = 2;
const int l4 = 3;
const int l5 = 4;
const int l6 = 5;
const int l7 = 6;
const int l8 = 7;
const int l9 = 8;
const int l10 = 9;
const int l11 = 10;
const int l12 = A0;
const int l13 = A1;
const int l14 = A2;
const int l15 = A3;
const int l16 = 11;
const int ck = A4;
const int reset = A5;

// definir constants

int pas=0;
int ckval=0;
int resetval=0;

void setup()
{
  // establir e/s
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l5,OUTPUT);
  pinMode(l6,OUTPUT);
  pinMode(l7,OUTPUT);
  pinMode(l8,OUTPUT);
  pinMode(l9,OUTPUT);
  pinMode(l10,OUTPUT);
  pinMode(l11,OUTPUT);
  pinMode(l12,OUTPUT);
  pinMode(l13,OUTPUT);
  pinMode(l14,OUTPUT);
  pinMode(l15,OUTPUT);
   pinMode(l16,OUTPUT);
  pinMode(ck, INPUT);
  pinMode(reset, INPUT);
  
  }

 void loop()
 {
   // legir entrades digitals
   
   ckval=digitalRead(ck);
   resetval=digitalRead(reset);
   
//PASSOS

// Reset
   
if (resetval==HIGH)
{
digitalWrite(l1,HIGH);
digitalWrite(l2, LOW);
digitalWrite(l3, LOW);
digitalWrite(l4, LOW);
digitalWrite(l5, LOW);
digitalWrite(l6, LOW);
digitalWrite(l7, LOW);
digitalWrite(l8, LOW);
digitalWrite(l9, LOW);
digitalWrite(l10, LOW);
digitalWrite(l11, LOW);
digitalWrite(l12, LOW);
digitalWrite(l13, LOW);
digitalWrite(l14, LOW);
digitalWrite(l15, LOW);
digitalWrite(l16, LOW);
pas=1;
}

// LOOP
   
if (ckval==HIGH && pas==1600)
{
digitalWrite(l1,HIGH);
digitalWrite(l16, LOW);
pas=1;
}


// PAS1
   
if (ckval==HIGH && pas==0)
{
digitalWrite(l1,HIGH);
pas=1;
}



if (ckval==LOW && pas==1)
{
pas=100;
}

// PAS2
   
if (ckval==HIGH && pas==100)
{
digitalWrite(l1,LOW);
digitalWrite(l2, HIGH);
pas=2;
}

if (ckval==LOW && pas==2)
{
pas=200;
}

// PAS3
   
if (ckval==HIGH && pas==200)
{
digitalWrite(l2, LOW);
digitalWrite(l3, HIGH);
pas=3;
}

if (ckval==LOW && pas==3)
{
pas=300;
}

// PAS4
   
if (ckval==HIGH && pas==300)
{
digitalWrite(l3, LOW);
digitalWrite(l4, HIGH);
pas=4;
}

if (ckval==LOW && pas==4)
{
pas=400;
}

// PAS5
   
if (ckval==HIGH && pas==400)
{
digitalWrite(l4, LOW);
digitalWrite(l5, HIGH);
pas=5;
}

if (ckval==LOW && pas==5)
{
pas=500;
}

// PAS6
   
if (ckval==HIGH && pas==500)
{
digitalWrite(l5, LOW);
digitalWrite(l6, HIGH);
pas=6;
}

if (ckval==LOW && pas==6)
{
pas=600;
}

// PAS7
   
if (ckval==HIGH && pas==600)
{
digitalWrite(l6, LOW);
digitalWrite(l7, HIGH);
pas=7;
}

if (ckval==LOW && pas==7)
{
pas=700;
}

// PAS8
   
if (ckval==HIGH && pas==700)
{
digitalWrite(l7, LOW);
digitalWrite(l8, HIGH);
pas=8;
}

if (ckval==LOW && pas==8)
{
pas=800;
}

// PAS9
   
if (ckval==HIGH && pas==800)
{
digitalWrite(l8, LOW);
digitalWrite(l9, HIGH);
pas=9;
}

if (ckval==LOW && pas==9)
{
pas=900;
}

// PAS10
   
if (ckval==HIGH && pas==900)
{
digitalWrite(l9, LOW);
digitalWrite(l10, HIGH);
pas=10;
}

if (ckval==LOW && pas==10)
{
pas=1000;
}

// PAS11
   
if (ckval==HIGH && pas==1000)
{
digitalWrite(l10, LOW);
digitalWrite(l11, HIGH);
pas=11;
}

if (ckval==LOW && pas==11)
{
pas=1100;
}

// PAS12
   
if (ckval==HIGH && pas==1100)
{
digitalWrite(l11, LOW);
digitalWrite(l12, HIGH);
pas=12;
}

if (ckval==LOW && pas==12)
{
pas=1200;
}

// PAS13
   
if (ckval==HIGH && pas==1200)
{
digitalWrite(l12, LOW);
digitalWrite(l13, HIGH);
pas=13;
}

if (ckval==LOW && pas==13)
{
pas=1300;
}


// PAS14
   
if (ckval==HIGH && pas==1300)
{
digitalWrite(l13, LOW);
digitalWrite(l14, HIGH);
pas=14;
}

if (ckval==LOW && pas==14)
{
pas=1400;
}

// PAS15
   
if (ckval==HIGH && pas==1400)
{
digitalWrite(l14, LOW);
digitalWrite(l15, HIGH);
pas=15;
}

if (ckval==LOW && pas==15)
{
pas=1500;
}

// PAS16
   
if (ckval==HIGH && pas==1500)
{
digitalWrite(l15, LOW);
digitalWrite(l16, HIGH);
pas=16;
}

if (ckval==LOW && pas==16)
{
pas=1600;
}

 }
