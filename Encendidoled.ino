/*Hola mundo a encendido de un LED*/
// El pin 13 tendra el LED
int led = 13;
//Configuracion del pin 13 como salida
void setup() {
  pinMode(led, OUTPUT);
} // Ciclo de programa
  
void loop() {
  digitalWrite(led, HIGH); //Activa el LED
}