// João Victor Moreira de Souza
// Turma: 2017/2

/* Elaborar um programa que leia o valor numérico correspondente ao salário mensal de um trabalhador e também
faça a leitura do valor do percentual de reajuste a ser atribuído. Apresentar o valor do novo salário. */

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
