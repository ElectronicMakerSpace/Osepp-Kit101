/*
 * Tutorial 2: Controlling Digital Outputs/Control de salidas digitales
 * 
 * Uso de señales digitales para controlar una matriz de LEDs
 */

 int LED0=2; //Se usara el pin digtal 2 para conectar el LED blanco
 int LED1=3; //Se usara el pin digtal 3 para conectar el LED amarillo 
 int LED2=4; //Se usara el pin digtal 4 para conectar el LED verde
 int LED3=5; //Se usara el pin digtal 5 para conectar el LED rojo
 
void setup() {
  //Se inicializa los pine digitales del 2 al 5 como salidas
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  // GG
  digitalWrite(LED0,HIGH);
  delay(500);
  digitalWrite(LED0,LOW);
  delay(500);
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  delay(500);
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED2,LOW);
  delay(500);
  digitalWrite(LED3,HIGH);
  delay(500);
  digitalWrite(LED3,LOW);
  delay(500);

}
