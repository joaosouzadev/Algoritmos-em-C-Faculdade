// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* Ler dois valores para as vari�veis A e B e efetuar a troca dos valores de forma que a vari�vel A passe a possuir
o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresentar os valores ap�s a efetiva��o
do processamento da troca. */

#include <stdio.h>

int main() {

    int a, b, intermediario;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

	printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    intermediario = a;
    a = b;
    b = intermediario;
    
    printf("Valor de A: %d", a);
    printf("\nValor de B: %d", b);
    
    return 0;
}
