/*
 * Tutorial 4: An LED Game/Un juego de LEDs
 * 
 * Se combina el uso de pines de entrada y salida digitales para construir un juego de LED simple. En este juego va a parpadear cada LED 
 * en un ciclo de blanco, amarillo, verde, rojo y luego de nuevo a blanco. El objetivo de este juego es detener el led en el momento exacto 
 * en que se enciende el LED verde presionando el interruptor táctil.
 */

 int currentLED=2;
 int delayValue=200;
 
void setup() {
  //Se inicializa el pin digital 12 como entrada
  pinMode(12,INPUT); //Botón de entrada

  //Se inicializa los pines digitales del 2 al 5 como salidas
   pinMode(2,OUTPUT); //LED blanco
   pinMode(3,OUTPUT); //LED amarillo
   pinMode(4,OUTPUT); //LED verde
   pinMode(5,OUTPUT); //LED rojo
}

int checkInput(){
  if (digitalRead(12)==0){
    return 1;
  }else{
    return 0;
  }
}

void loop() {
  //Se comprueba si el botón está presionado en el momento correcto
  if (digitalRead(12)==0){
    if(currentLED==4){
      //Parpadea el LED correcto(VERDE)
      digitalWrite(4,HIGH);
      delay(200);
      digitalWrite(4,LOW);
      delay(200);
      digitalWrite(4,HIGH);
      delay(200);
      digitalWrite(4,LOW);
      delay(200);

      //Acelerar los LEDs
      delayValue = delayValue-20;
      
    }else{
      //Parpadea el LED incorrecto
      digitalWrite(currentLED,HIGH);
      delay(200);
      digitalWrite(currentLED,LOW);
      delay(200);
      digitalWrite(currentLED,HIGH);
      delay(200);
      digitalWrite(currentLED,LOW);
      delay(200);
    }
  }
  //Ciclo LED de blanco --> amarillo --> verde --> rojo
  digitalWrite(currentLED,HIGH);
  delay(delayValue);
  digitalWrite(currentLED,LOW);
  delay(delayValue);
  currentLED = currentLED + 1;
  if(currentLED > 5){
    currentLED = 2;
  }
}
