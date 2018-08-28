// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

//j) Elaborar um programa que leia sucessivamente valores numéricos e apresente no final o somatório, a média
//e o total de valores lidos. O programa deve ler os valores enquanto o usuário estiver fornecendo valores
//positivos. Ou seja, o programa deve parar quando o usuário fornecer um valor negativo (menor que zero).

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
