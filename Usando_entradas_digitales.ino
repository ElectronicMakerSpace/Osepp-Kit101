/*
 * Tutorial 3: Using Digital Input/Usando entrada digital
 * 
 * Se lee una señal digital usando el UNO R3 e informa el estado de la señal usando el monitor serial.
 */

 //Se establece el Pin digtal 12 para el boton
 const int buttonPin=12;
 //Se establece una variable para el estado del boton
 int buttonState=0;
 
void setup() 
{
  //Se incializa pin pin correspondiente al boton como entrada
  pinMode(buttonPin, INPUT);

  //Se inicializa el puerto serial
  Serial.begin(9600); //
}

void loop() {
  //Se lee el estado del boton como una entrada
  buttonState=digitalRead(buttonPin);

  //Estado del boton de salida
  Serial.print("The button state is ");
  Serial.println(buttonState);

  //Espera de 1 segundo
  delay(1000);

}
