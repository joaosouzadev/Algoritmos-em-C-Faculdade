// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

// b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser
// apresentada de acordo com sua forma tradicional. Ex.: 1x1 = 1 1x2 = 2

#include<stdio.h>

int main() {
	
	int multiplicador, numero, resultado;
	
	printf("Digite um numero:");
	scanf("%d", &numero);
	printf("Tabuada do numero %d:", numero);
	
	for (multiplicador = 1; multiplicador<11; multiplicador++) {
		resultado = (numero * multiplicador);
		printf("\n%d * %d = %d", numero, multiplicador, resultado);
	}
	
	return 0;
}
