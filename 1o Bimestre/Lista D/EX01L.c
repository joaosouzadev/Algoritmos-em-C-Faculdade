// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//l) Elaborar um programa que apresente os resultados da soma e da m�dia aritm�tica dos valores pares
//situados na faixa num�rica de 50 at� 70.

#include<stdio.h>

int main() {

	int numero = 50, contador = 0;
    float soma, media;
	
	do {
		soma = soma + numero;
		numero+= 2;
		contador++;
	} while (numero >= 50 && numero <= 70);
    
	media = soma / contador;
	
    printf("\nSoma dos numeros pares situados de 50 ate 70: %.1f", soma);
	printf("\nMedia dos numeros pares situados de 50 ate 70: %.1f", media);
    
    return 0;
}
