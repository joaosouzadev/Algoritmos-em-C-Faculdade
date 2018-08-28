// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

//o) Elaborar um programa que apresente o resultado inteiro da divisão de dois números quaisquer,
//representando o dividendo e o divisor da divisão a ser processada. Para a elaboração do programa, não
//utilize o operador aritmético de divisão com quociente inteiro DIV. Use uma solução baseada em laço de
//repetição. O programa deve apresentar como resultado (quociente) quantas vezes o divisor cabe no
//dividendo.

#include<stdio.h>

int main() {
	
	int dividendo, divisor, resultado = 1, resto;
	
	printf("Digite o dividendo:\n");
	scanf("%d", &dividendo);
	
	printf("Digite o divisor:\n");
	scanf("%d", &divisor);
	
	do {
		dividendo = dividendo - divisor;
		if (divisor > dividendo){
			break;
		}
		resultado = resultado + 1;
	} while (dividendo > divisor);
	
	printf("Resultado: %d", resultado);
	
	return 0;
}
