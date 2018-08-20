// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* j) Efetuar a leitura de três valores inteiros desconhecidos, somar os valores fornecidos e apresentar o resultado
somente se for maior ou igual a 100. */

#include<stdio.h>

int main(){
	
	int a, b, c, resultado;
	
	printf("Digite o primeiro numero ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero ");
	scanf("%d", &b);
	
	printf("Digite o terceiro numero ");
	scanf("%d", &c);
	
	resultado = a + b + c;
	
	if (resultado >= 100) {
		printf("A soma destes 3 numeros e: %d", resultado);
	} else {
		printf("Nao posso mostrar o resultado pois a soma e menor do que 100");
	}
	
	return 0;
}
