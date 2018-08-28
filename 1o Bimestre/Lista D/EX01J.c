// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//j) Elaborar um programa que leia sucessivamente valores num�ricos e apresente no final o somat�rio, a m�dia
//e o total de valores lidos. O programa deve ler os valores enquanto o usu�rio estiver fornecendo valores
//positivos. Ou seja, o programa deve parar quando o usu�rio fornecer um valor negativo (menor que zero).

#include<stdio.h>

int main() {
	
	int entrada, numero = 1;
	
	float soma, media;
	
	printf("\nDigite um numero: \n");
	scanf("%d", &entrada);
	
	while (entrada >= 0) {
		soma = soma + entrada;
		media = soma / numero;
		
		printf("\nDigite um numero: \n");
		scanf("%d", &entrada);
		numero++;
	}
	
	printf("\nSoma dos numeros: %.1f", soma);
	printf("\nMedia dos numeros: %.1f", media);
	
	return 0;
}
