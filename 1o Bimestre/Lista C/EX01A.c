// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* a) Efetuar leitura de dois valores numéricos inteiros e apresentar o resultado da diferença do maior valor pelo
menor valor. */

#include<stdio.h>

int main(){
	
	int a, b;
	
	printf("Digite o primeiro numero");
	scanf("%d", &a);
	
	printf("Digite o segundo numero");
	scanf("%d", &b);
	
	int conta = a - b;
	
	if (a > b) {
		printf("O resultado é: %d", conta);
	} else {
		printf("O resultado é: %d", b - a);
	}
	
	return 0;
}
