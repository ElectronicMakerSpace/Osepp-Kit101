/*
 * Tutorial 6: Playing an Melody/Tocando un Melodía
 *  
 * Se usa un buzzer para tocar una melodía
*/

#include "pitches.h"

//Notas en la melodía
int melody[] = { 
  NOTE_C4,NOTE_G3,NOTE_G3,NOTE_A3,NOTE_G3,0,NOTE_B3,NOTE_C4
};

//Duración de notas: 4 = Cuarto de nota, 8 = Octavo de nota
int noteDurations[] = {
  4,8,8,4,4,4,4,4};
  
void setup()
{
    //Iteración sobre las notas de la melodía
    for (int thisNote = 0; thisNote < 8; thisNote++)
    {
        //Variable para calcular la duración de la nota
        int noteDuration = 1000 / noteDurations[thisNote];
        tone(8,melody[thisNote],noteDuration);

       //Para distinguir las notas, se establece un tiempo mínimo entre ellas
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        //Se detiene la melodía
        noTone(8);
    }
}

void loop()
{ 
//Si no es necesario repetir la melodía, en esta parte no se hace nada 
}
