// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

//c) Construir um programa que apresente a soma dos cem primeiros números naturais: (1+2+3+
//...+98+99+100).

#include<stdio.h>

int main() {
	
	int n, resultado;
	
	resultado = 0;
	
	for (n = 1; n<101; n++) {
		resultado = resultado + n;
	}
	
	printf("\nO resultado da soma dos cem primeiros numeros naturais e = %d", resultado);
	
	return 0;
}
