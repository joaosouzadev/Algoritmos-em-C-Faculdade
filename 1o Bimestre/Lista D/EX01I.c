// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

//i) Elaborar um programa que leia dez valores numéricos reais e apresente no final o somatório e a média dos
//valores lidos

#include<stdio.h>

int main() {
	
	int qtdNumeros = 10, numero = 1;
	float soma, media, entrada;
	
	printf("\nDigite 10 numeros reais\n");
	
	while (numero <= 10) {
		scanf("%f", &entrada);
		soma = soma + entrada;
		media = soma / numero;
		numero = numero +1;
	}
	
	printf("\nSoma dos 10 numeros: %.1f", soma);
	printf("\nMedia dos 10 numeros: %.1f", media);
	
	return 0;
}
