// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

//f) Construir um programa que apresente todos os valores numéricos divisíveis por 4 e menores que 200. A
//variável que controla o contador do laço de repetição deve ser iniciada com valor 1 e possuir passo 1.


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
