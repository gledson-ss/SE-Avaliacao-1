#define F_CPU 1600000UL
#include <avr/io.h>
#include <util/delay.h>

ISR(INT0_vect) {
  PORTC ^= 0b00100000; 
}

int main(void)
{
  PORTD = 0xFF;
  DDRD = 0x00;
  DDRC = 0b00100000; 
  EICRA = 0b00000010;
  EIMSK = 0b00000001;
  sei();
  int True = 1;
  while(True){}
}

//Escreva um código para configurar a interrupção externa apenas para o pino 28 do ATmega328P ilustrado na figura abaixo
