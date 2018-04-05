/*
 * Tutorial 7: Counting Down with a 7 segment LED/Cuenta regresiva con un LED de 7 segmentos
 * 
 * Se cableará la pantalla LED, y se hará un conteo simple de 9 a 0
 */

//Se define los patrones de dígitos LED, de 0-9
//NOTA: Estos patrones son para pantallas de anodo común
//0 = LED encendido, 1 = LED apagado
//Pines digitales : 2,3,4,5,6,7,8
//                  a,b,c,d,e,f,g
byte seven_seg_digits[10][7]={{0,0,0,0,0,0,1}, //=0
                              {1,0,0,1,1,1,1}, //=1
                              {0,0,0,0,1,1,0}, //=2
                              {1,0,0,1,1,0,0}, //=3
                              {0,1,0,0,1,0,0}, //=4
                              {0,1,0,0,0,0,0}, //=5
                              {0,0,0,1,1,1,1}, //=6
                              {0,0,0,0,0,0,0}, //=7
                              {0,0,0,1,1,0,0}  //=8
                             };
 
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void sevenSegWrite(byte digit){
  byte pin =2;
  for(byte segCount = 0; segCount < 7; ++segCount){
    digitalWrite(pin,seven_seg_digits[digit][segCount]);
    ++pin;
  }
}

void loop() {
  for(byte count = 10; count > 0; --count){
    delay(1000);
    sevenSegWrite(count - 1);
  }
  delay(3000);

}
