/*
 * Tutorial 5: Building Voltage Meter/Medidor de Voltaje
 * 
 * Se utiliza los pines analógicos en el UNO R3 PLUS como un medidor de voltaje. Se muestra la salida de tensión en el monitor serial.
 */

//Se selecciona el pin de entrada analogica
int sensorPin = A0;
//Se declara una variable para almacenar el valor proveniente del sensor
int sensorValue = 0;
//Se declara una variable para almacenar el voltaje proveniente del sensor
float sensorVoltage = 0;

void setup() {
  //Configuracion del puerto serial para la salida
  Serial.begin(9600);
}

void loop() {
  //Se lee el valor que proviene del pin analogico de la entrada
  //un valor de 1023 = 5V, un valor de 0 = 0V
  int sensorValue = analogRead(sensorPin);

  //Se convierte el valor del sensor a voltaje
  float sensorVoltage = sensorValue*(5.0/1023.0);

  //Se imprime el valor del sensor
  Serial.print("El voltaje es ");
  Serial.println(sensorVoltage);

  //Espera de 1 segundo
  delay(1000);
}
