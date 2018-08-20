// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* d) Ler três valores inteiros e apresentar os valores lidos dispostos em ordem crescente. */

#include<stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Digite o primeiro numero");
	scanf("%d", &a);
	
	printf("Digite o segundo numero");
	scanf("%d", &b);
	
	printf("Digite o terceiro numero");
	scanf("%d", &c);
	
	if (a < b && b < c) {
		printf("\n%d %d %d", a, b, c);
	} else if (a < c && c < b) {
		printf("\n%d %d %d", a, c, b);
	} else if (b < c && c < a) {
		printf("\n%d %d %d", b, c, a);
	} else if (b < a && a < c) {
		printf("\n%d %d %d", b, a, c);
	} else if (c < a && a < b) {
		printf("\n%d %d %d", c, a, b);
	} else if (c < b && b < a) {
		printf("\n%d %d %d", c, b, a);
	} 
	
	return 0;
}
