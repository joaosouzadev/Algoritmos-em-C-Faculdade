// João Victor Moreira de Souza
// Turma: 2017/2

/* Ler quatro valores numéricos inteiros e apresentar o resultado das adições e das multiplicações para a máxima
combinação possível entre as quatro variáveis. Considerando a leitura de valores para as variáveis A, B, C e D,
devem ser feitas seis adições e seis multiplicações, ou seja, deve ser combinada a variável A com a variável B,
a variável A com a variável C, a variável A com a variável D. Depois é necessário combinar a variável B com a
variável C e a variável B com a variável D e, por fim, a variável C será combinada com a variável D. */

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
