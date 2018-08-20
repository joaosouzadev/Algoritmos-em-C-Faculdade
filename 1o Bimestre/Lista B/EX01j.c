// João Victor Moreira de Souza
// Turma: 2017/2

/* Elaborar um programa que leia dois valores numéricos reais desconhecidos. Calcular e apresentar os resultados
das quatro operações aritméticas básicas. */

#include <stdio.h>

int main() {

    float a, b;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    
    printf("\nValor de A + B: %.1f", a + b);
    printf("\nValor de A - B: %.1f", a - b);
    printf("\nValor de A * B: %.1", a * b);
    printf("\nValor de A / B: %.1f", a / b);
    
    return 0;
}
