// João Victor Moreira de Souza
// Turma: 2017/2

/* Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir
o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação
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
