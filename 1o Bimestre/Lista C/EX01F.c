// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* f) Ler cinco valores numéricos inteiros, identificar e apresentar o maior e o menor valores informados. */

#include<stdio.h>

int main(){
	
	int a, b, c, d, e, maior, menor;
	
	printf("Digite o primeiro numero ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero ");
	scanf("%d", &b);
	
	printf("Digite o terceiro numero ");
	scanf("%d", &c);
	
	printf("Digite o quarto numero ");
	scanf("%d", &d);
	
	printf("Digite o quinto numero ");
	scanf("%d", &e);
	
	maior = a;
	
	if (maior < b){
		maior = b;
	}
	
	if (maior < c){
		maior = c;
	}
	
	if (maior < d){
		maior = d;
	}
	
	if (maior < e){
		maior = e;
	}
	
	menor = a;
	
	if (menor > b){
		menor = b;
	}
	
	if (menor > c){
		menor = c;
	}
	
	if (menor > d){
		menor = d;
	}
	
	if (menor > e){
		menor = e;
	}
	
	printf("Menor valor: %d \nMaior valor: %d", menor, maior);
	
	return 0;
}
