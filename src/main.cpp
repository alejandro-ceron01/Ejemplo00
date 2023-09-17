#include <Arduino.h>

int numero= 10;


void setup(){


}

void duplicar(int *punteroNumero) {
	*punteroNumero=*punteroNumero* 2;
	Serial.print("En duplicar(): punteroNumero =");
	Serial.println(*punteroNumero);
}

void loop() {
	Serial.print("En loop():numero="); //En loop(): numero= 10
	Serial.println(numero); 
	duplicar(&numero); // Pasamos la dirección de numero a la función
}

