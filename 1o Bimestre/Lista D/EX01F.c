// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//f) Construir um programa que apresente todos os valores num�ricos divis�veis por 4 e menores que 200. A
//vari�vel que controla o contador do la�o de repeti��o deve ser iniciada com valor 1 e possuir passo 1.


#include<stdio.h>

int main() {
	
    int numero = 0;

	while(numero <= 200) {
		numero++;
		if (numero % 4 == 0) {
		    printf("\nO numero %d e divisivel por 4", numero);
	    }
    }
    
    return 0;
}
