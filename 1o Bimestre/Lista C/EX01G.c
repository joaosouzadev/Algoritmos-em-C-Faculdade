// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* g) Ler um valor num�rico inteiro, apresentar uma mensagem informando se o valor fornecido � par ou �mpar.  */

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
