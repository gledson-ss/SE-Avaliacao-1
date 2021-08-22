#include <avr/io.h>
#include <util/delay.h>

int main(void) {	
	// setando botão entrada
	DDRD &= ~(1 << DDD3);

	// Fica atualizando valor da variavel x eternamente para sempre termos o valor atualizado
  // laço que sempre tem o valor mudado
  int True = 1;
	while (True) {
		bool estado = (PIND & (1 << DDD3));
	}
}

//Escreva um código em C para ler o estado do chave ‘S’, ilustrado na figura abaixo, e guarde na variável ‘estado’ do tipo ‘bool’.