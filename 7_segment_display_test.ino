
//This part sets PIN names on display to PIN number on Board

const int ledPinA=2;
const int ledPinB=3;
const int ledPinC=4;
const int ledPinD=5;
const int ledPinE=6;
const int ledPinF=7;
const int ledPinG=8;
const int ledPinDP=9;


void setup() {

//Initialize serial communication at 9600 bits per second:
Serial.begin(9600);

//Sets all PIN's to output

pinMode(ledPinA,OUTPUT);
pinMode(ledPinB,OUTPUT);
pinMode(ledPinC,OUTPUT);
pinMode(ledPinD,OUTPUT);
pinMode(ledPinE,OUTPUT);
pinMode(ledPinF,OUTPUT);
pinMode(ledPinG,OUTPUT);
pinMode(ledPinDP,OUTPUT);
}

void loop() {

Serial.println("Cycle Checking starting.");

//at start this turns off ALL LED'S
digitalWrite(ledPinA,LOW); //IF Common-Cathode (CC) use: LOW for start
digitalWrite(ledPinB,LOW);//IF Common-Anode(CA) use: HIGH for start
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinE,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);
digitalWrite(ledPinDP,LOW);

Serial.println("Cycle Checking completed.");

delay(1000); //set, so program does not crash

//Starts LED's 1 by 1
  
digitalWrite(ledPinA,HIGH); //turn ON spedified LED

delay(50);
// digitalWrite(ledPinA,LOW); //turn OFF spedified LED

digitalWrite(ledPinB,HIGH); //turn ON spedified LED
delay(50);
// digitalWrite(ledPinB,LOW); //turn OFF spedified LED

digitalWrite(ledPinC,HIGH); //turn ON spedified LED
delay(50);
// digitalWrite(ledPinC,LOW); //turn OFF spedified LED

digitalWrite(ledPinD,HIGH); //turn ON spedified LED
delay(50);
// digitalWrite(ledPinD,LOW); //turn OFF spedified LED

digitalWrite(ledPinE,HIGH); //turn ON spedified LED
delay(50);
// digitalWrite(ledPinE,LOW); //turn OFF spedified LED

digitalWrite(ledPinF,HIGH); //turn ON spedified LED
delay(50);
// digitalWrite(ledPinF,LOW); //turn OFF spedified LED

digitalWrite(ledPinG,HIGH); //turn ON spedified LED
delay(50);

digitalWrite(ledPinDP,HIGH); //turn ON spedified LED
delay(1000); //longer to check board for error's
// digitalWrite(ledPinG,LOW); //turn OFF spedified LED

//this turns off ALL LED'S
digitalWrite(ledPinA,LOW);
digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinE,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);
digitalWrite(ledPinDP,LOW);

delay(1000);

//Let's Learn to count

// 0 - ZERO

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED
digitalWrite(ledPinD,HIGH); //turn ON spedified LED
digitalWrite(ledPinE,HIGH); //turn ON spedified LED
digitalWrite(ledPinF,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinE,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);

// 1 - ONE

digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);

// 2 - TWO

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinD,HIGH); //turn ON spedified LED
digitalWrite(ledPinE,HIGH); //turn ON spedified LED
digitalWrite(ledPinG,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinB,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinE,LOW);
digitalWrite(ledPinG,LOW);

// 3 - THREE

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED
digitalWrite(ledPinD,HIGH); //turn ON spedified LED
digitalWrite(ledPinG,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinG,LOW);

// 4 - FOUR

digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED
digitalWrite(ledPinF,HIGH); //turn ON spedified LED
digitalWrite(ledPinG,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);

// 5 - FIVE

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED
digitalWrite(ledPinD,HIGH); //turn ON spedified LED
digitalWrite(ledPinF,HIGH); //turn ON spedified LED
digitalWrite(ledPinG,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);

// 6 - SIX

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED
digitalWrite(ledPinD,HIGH); //turn ON spedified LED
digitalWrite(ledPinE,HIGH); //turn ON spedified LED
digitalWrite(ledPinF,HIGH); //turn ON spedified LED
digitalWrite(ledPinG,HIGH); //turn ON spedified LED
digitalWrite(ledPinDP,HIGH);

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinE,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);
digitalWrite(ledPinDP,LOW);

// 7 - SEVEN

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);

// 8 - EIGHT

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED
digitalWrite(ledPinD,HIGH); //turn ON spedified LED
digitalWrite(ledPinE,HIGH); //turn ON spedified LED
digitalWrite(ledPinF,HIGH); //turn ON spedified LED
digitalWrite(ledPinG,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinE,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);

// 9 - NINE

digitalWrite(ledPinA,HIGH); //turn ON spedified LED
digitalWrite(ledPinB,HIGH); //turn ON spedified LED
digitalWrite(ledPinC,HIGH); //turn ON spedified LED
digitalWrite(ledPinD,HIGH); //turn ON spedified LED
digitalWrite(ledPinF,HIGH); //turn ON spedified LED
digitalWrite(ledPinG,HIGH); //turn ON spedified LED

delay(500);

digitalWrite(ledPinA,LOW);
digitalWrite(ledPinB,LOW);
digitalWrite(ledPinC,LOW);
digitalWrite(ledPinD,LOW);
digitalWrite(ledPinF,LOW);
digitalWrite(ledPinG,LOW);

//Looping to top

Serial.println("Starting again!");
}
