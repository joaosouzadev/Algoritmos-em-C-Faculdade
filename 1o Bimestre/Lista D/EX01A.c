// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//a) Elaborar um programa que apresente os quadrados dos n�meros inteiros existentes na faixa de valores de
//15 a 200.


#include<stdio.h>

int main() {
	
	int n, quadrado;
	
	printf("Apresentando os quadrados dos numeros inteiros existentes entre 15 e 200");
	
	for (n = 15; n<201; n++) {
		quadrado = (n * n);
		printf("\nO quadrado de %d e = %d", n, quadrado);
	}
	
	return 0;
}
