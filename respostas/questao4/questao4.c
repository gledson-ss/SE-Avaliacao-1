#include <avr/io.h>
#include <util/delay.h>
int main(void) {	
  // pino led como output
  DDRB |= (1 << DDB5);
  // pino led como input.
  DDRD &= ~(1 << DDD3);

  int True = 1;
  while (True) {
	if (!(PIND & (1 << PIND3))) {
	  PORTB |= (1 << PINB5);
	} else {
		PORTB &= (~(1 << PINB5));
	}
  }
}

//O microcontrolador ATmega328P conta com 23 linhas de propósito geral (GPIO) que podem ser configuradas como entradas ou saídas. Na figura abaixo é ilustrado um circuito elétrico, elabore o código em C para configurar o registrador de direção que controla as GPIOs conforme sua utilização no circuito.
