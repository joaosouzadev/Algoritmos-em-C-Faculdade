// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* Ler quatro valores num�ricos inteiros e apresentar o resultado das adi��es e das multiplica��es para a m�xima
combina��o poss�vel entre as quatro vari�veis. Considerando a leitura de valores para as vari�veis A, B, C e D,
devem ser feitas seis adi��es e seis multiplica��es, ou seja, deve ser combinada a vari�vel A com a vari�vel B,
a vari�vel A com a vari�vel C, a vari�vel A com a vari�vel D. Depois � necess�rio combinar a vari�vel B com a
vari�vel C e a vari�vel B com a vari�vel D e, por fim, a vari�vel C ser� combinada com a vari�vel D. */

#include <stdio.h>

int main() {

    int a, b, c, d, maximaSoma, maximaMultiplicacao;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

	printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    printf("Digite o valor de C: ");
    scanf("%d", &c);

	printf("Digite o valor de D: ");
    scanf("%d", &d);
    
    maximaSoma = (a + b) + (a + c) + (a + d) + (b + c) + (b + d) + (c + d);
	    
    printf("Soma Maxima: %d", maximaSoma);
    
    maximaMultiplicacao = (a * b) + (a * c) + (a * d) + (b * c) + (b * d) + (c * d);
    
    printf("\nMultiplicacao maxima: %d", maximaMultiplicacao);
    
    return 0;
}
