//Segunda parte de la practica cinco.
/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Relevadores y visualizadores
   Dev: Damasco Oxcal Vasquez
   Fecha: 10 de mayo
*/

const int pinBuzzer = 2;
const int countTonos = 66;//genera un array con diferentes tonos (frecuencias).
const int tonos[countTonos] = {391.995, 391.995, 391.995, 311.127, 466.164, 391.995,
                     311.127, 466.164, 391.995, 293.665, 293.665, 293.665,
                     311.127, 466.164, 369.994, 311.127, 466.164, 391.995,
                     391.995, 391.995, 391.995, 391.995, 369.994, 349.228,
                     329.628, 311.127, 329.628, 415.305, 277.183, 261.626, 
                     493.883, 466.164, 440.000, 466.164, 311.127, 369.994,
                     311.127, 369.994, 466.164, 391.995, 466.164, 293.665, 
                     391.995, 391.995, 391.995, 391.995, 369.994, 349.228, 
                     329.628, 311.127, 329.628, 415.305, 277.183, 261.626,
                     493.883, 466.164, 440.000, 466.164, 311.127, 369.994, 
                     311.127, 466.164, 391.995, 311.127, 466.164, 391.995};

const int duracion[countTonos]={451, 451, 451, 251, 100, 450, 250, 100, 850, 450, 450, 450, 350, 100, 350,
                              350, 100, 850, 700, 100, 100, 150, 400, 100, 100, 100, 400, 300, 300, 400,
                              100, 100, 100, 100, 350, 500, 400, 100, 550, 550, 100, 850, 700, 100, 100, 
                              150, 300, 150, 100, 100, 400, 300, 300, 600, 100, 100, 100, 100, 500, 500,
                              350, 100, 400, 400, 100, 801};

void setup(){

}
void loop(){
  for(int iTono = 0; iTono < countTonos; iTono++)//recorre el array
  {
    tone(pinBuzzer, tonos[iTono]); //selecciona el tono
    delay(duracion [iTono]);
    noTone(pinBuzzer); //apaga el tono 
    delay(120);
  }
}
