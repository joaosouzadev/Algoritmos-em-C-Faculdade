// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//o) Elaborar um programa que apresente o resultado inteiro da divis�o de dois n�meros quaisquer,
//representando o dividendo e o divisor da divis�o a ser processada. Para a elabora��o do programa, n�o
//utilize o operador aritm�tico de divis�o com quociente inteiro DIV. Use uma solu��o baseada em la�o de
//repeti��o. O programa deve apresentar como resultado (quociente) quantas vezes o divisor cabe no
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
