// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//n) Elaborar um programa que leia valores positivos inteiros at� que um valor negativo seja informado. Ao final
//devem ser apresentados o maior e o menor valores informados pelo usu�rio. 

#include<stdio.h>

int main() {
	
	int entrada, maior, menor;
	
	printf("Digite um numero inteiro (valor negativo para sair do programa):\n");
	scanf("%d", &entrada);
	menor = entrada;
	maior = entrada;
	
	do {
		printf("Digite um numero:\n");
		scanf("%d", &entrada);
			
		if (entrada < 0) {
			break;
		}
		if (entrada > maior) {
			maior = entrada;
		}
		if (entrada < menor) {
			menor = entrada;
		}
	} while (entrada >= 0);
	
	printf("Maior: %d", maior);
	printf("Menor: %d", menor);
	
	return 0;
}
