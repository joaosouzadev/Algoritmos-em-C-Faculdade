// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* Elaborar um programa que leia o valor num�rico correspondente ao sal�rio mensal de um trabalhador e tamb�m
fa�a a leitura do valor do percentual de reajuste a ser atribu�do. Apresentar o valor do novo sal�rio. */

#include <stdio.h>

int main() {

    float salario, reajuste, salarioReajustado;

    printf("Digite o salario a ser reajustado: ");
    scanf("%f", &salario);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);
    
    reajuste = reajuste / 100;
    
    salarioReajustado = salario + (salario * reajuste);
    
    printf("\nNovo salario: R$ %.2f", salarioReajustado);
    
    return 0;
}
