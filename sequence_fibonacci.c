#include <stdio.h>
#include <stdlib.h>

int main () {

	int x = 0;
	int y = 1;
	int number;
	int n = 0;
	
	printf("Digite um número inteiro até 300 pra verificar se pertence a sequência de Fibonacci\n");
	scanf("%i", &number);

	while (n != number && n < number) {
		n = x + y; //soma dos primeiros termos
		x = y; //igualando primeiro termo ao próximo
		y = n; //igualando segundo termo ao primeiro
		printf("%i\n", n);
	}

	if (n == number) {
		printf("Este número pertence a sequência de Fibonacci\n");

	} else {
	       	printf("este número não pertence a sequência de Fibonacci\n");
	}
		

		return 0;
}
