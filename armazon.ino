

//###############################################@@@@@@@@@@@@@@ ARMAZON BRAZO ROBOTICO @@@@@@@@@@@@@@#################################################
#include <Servo.h>
#include <PS2Keyboard.h>  //LIBRERIAS
#include <Psx.h>
#include <LCD5110_Basic.h>

#define dataPin 2 //PAD PIN
#define cmndPin 3
#define attPin 4
#define clockPin 5

const int DataPin = 20; //KEY PIN
const int IRQpin =  21;
Psx Psx;                                                  
PS2Keyboard keyboard;

Servo myservoy;  // SERVO NOMBRE
Servo myservox;
Servo myservo1y; 
Servo myservo1x;
Servo myservo2x; 


LCD5110 myGLCD(52,51,50,46,53); // LCD PIN

int ledr=26;
int ledg=28;
int ledb=30;

unsigned int data = 0;//VARIABLES
int contadormenu=0;
int contador=0;
int contador1=0;
int pos1=51;
int pos2=41;
int pos3=31;
int pos4=90;
int pos5=110;

int consol=0;
int cambio=0;

extern uint8_t SmallFont[]; //TAMAÑO TEXTO
extern uint8_t inicio[];// 
extern uint8_t robot[];
extern uint8_t brazo[];
extern uint8_t termi[];

char* miStrings[6]={"saluda", "estírate", "cuadrado","descansa"}; //ARRAY DE STRING
String miString; 

void setup(){ 
  Serial.begin(57600);//INICIACION DE LIBRERIAS
  keyboard.begin(DataPin, IRQpin);
  Psx.setupPins(dataPin, cmndPin, attPin, clockPin, 10);
  myservoy.attach(7);   //PIN SERVO
  myservox.attach(6);
  myservo1y.attach(45);
  myservo1x.attach(9);
  myservo2x.attach(44);
  presinicio();
  myGLCD.InitLCD(); 
  myGLCD.setFont(SmallFont);
  myGLCD.drawBitmap(0, 0, inicio, 84, 48); 
  pinMode(ledr,OUTPUT);
  pinMode(ledb,OUTPUT);
  pinMode(ledg,OUTPUT);
  rgbinicio();
  myGLCD.clrScr();
}
void loop(){

  menu_lcd();  
  data = Psx.read();
  delay(75);
  if (data & psxR1){
    contadormenu++;
  }
    switch(contadormenu){ 

    case 1:
      joytisk();
      break;
    case 2:  
      comando();
      break;
    case 3:
      presentacion();
      break;
    }
  }
