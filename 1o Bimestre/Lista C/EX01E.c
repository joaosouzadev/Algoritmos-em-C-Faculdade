// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* e) Fazer a leitura de 4 valores numéricos inteiros. Apresentar apenas os valores que sejam divisíveis por 2 e 3. */

#include<stdio.h>

int main(){
	
	int a, b, c, d;
	
	printf("Digite o primeiro numero ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero ");
	scanf("%d", &b);
	
	printf("Digite o terceiro numero ");
	scanf("%d", &c);
	
	printf("Digite o quarto numero ");
	scanf("%d", &d);
	
	if (a % 2 == 0 && a % 3 == 0){
		printf("\nO numero -> %d <- e divisivel por 2 e por 3", a);
	}
	
	if (b % 2 == 0 && b % 3 == 0){
		printf("\nO numero -> %d <- e divisivel por 2 e por 3", b);
	}
	
	if (c % 2 == 0 && c % 3 == 0){
		printf("\nO numero -> %d <- e divisivel por 2 e por 3", c);
	}
	
	if (d % 2 == 0 && d % 3 == 0){
		printf("\n\nO numero -> %d <- e divisivel por 2 e por 3", d);
	}
	
	if ( !(a % 2 == 0 && a % 3 == 0) && !(b % 2 == 0 && b % 3 == 0) && !(c % 2 == 0 && c % 3 == 0) && !(d % 2 == 0 && d % 3 == 0) ) {
		printf("\nNenhum numero digitado e divisivel por 2 e por 3");
	}
	
	return 0;
}
