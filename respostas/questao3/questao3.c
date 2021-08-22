#include <avr/io.h>
#include <util/delay.h>
int main(void) {	
  // pino led agora esta como output
	DDRB |= (1 << DDB5);
  int True = 1;
	while (True) {
		PORTB |= (1 << PINB5);
	}
}

//Escreva um programa em linguagem C que acenda o LED, ilustrado na figura abaixo.