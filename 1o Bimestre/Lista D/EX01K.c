// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//k) Construir um programa que apresente como resultado a fatorial dos valores �mpares situados na faixa
//num�rica de 1 at� 10.

#include<stdio.h>
 
int main() {
	
	int x = 1, numeroFatorado = 0, fatorial = 1;
	
	printf("Lista dos 10 primeiros fatoriais:\n");
	do{
		fatorial = fatorial * x;
		x++;
		numeroFatorado++;
		printf("%d! = %d\n", numeroFatorado, fatorial);
	} while (numeroFatorado < 10);
 
	return 0;
}
