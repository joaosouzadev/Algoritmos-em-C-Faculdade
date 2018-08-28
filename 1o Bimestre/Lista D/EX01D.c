// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//d) Escrever um programa que apresente como resultado a pot�ncia de uma base qualquer elevada a um
//expoente qualquer, ou seja, de BS^EX, em que BS � o valor da base e EX o valor do expoente. Considere
//apenas a entrada de valores inteiros e positivos, ou seja, de valores naturais. Use a t�cnica de la�o de
//repeti��o, em que o valor da base deve ser multiplicado o n�mero de vezes determinado no expoente.

#include<stdio.h>

int main() {
	
	int base, expoente, n, resultado;
	
	printf("Digite o numero base: ");
	scanf("%d", &base);
	
	while (base < 0) {
		printf("Digite o numero base (positivo): ");
		scanf("%d", &base);
	}
	
	printf("Digite o expoente: ");
	scanf("%d", &expoente);
	
	while (expoente < 0) {
		printf("Digite o expoente (positivo): ");
		scanf("%d", &expoente);
	}
	
	resultado = 1;
	
	for (n = 1; n <= expoente; n++) {
		resultado = resultado * base;
	}
	
	printf("\nO resultado da multiplicacao base^EXPOENTE e = %d", resultado);
	
	return 0;
}
