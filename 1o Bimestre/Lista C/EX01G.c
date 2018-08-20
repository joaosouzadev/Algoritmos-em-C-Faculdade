// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* g) Ler um valor numérico inteiro, apresentar uma mensagem informando se o valor fornecido é par ou ímpar.  */

#include<stdio.h>

int main(){
	
	int a;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	if (a % 2 == 0){
		printf("O numero %d e par", a);
	} else {
		printf("O numero %d e impar", a);
	}
	
	return 0;
}
