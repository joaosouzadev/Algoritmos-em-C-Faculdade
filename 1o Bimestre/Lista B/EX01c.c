// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* Efetuar o c�lculo e apresentar o valor de uma presta��o de um bem em atraso, utilizando a f�rmula
PRESTA��O:=VALOR + (VALOR*(TAXA/100)*TEMPO). */

#include <stdio.h>

int main() {

    float prestacao, valorAjustado, taxa, dias;

    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);

	printf("Digite o valor da taxa: ");
    scanf("%f", &taxa);
    
    printf("Digite os dias em atraso: ");
    scanf("%f", &dias);
    
    valorAjustado = prestacao + (prestacao * (taxa/100) * dias);

    printf("Valor da prestacao em atraso: R$ %.2f;", valorAjustado);
    
    return 0;
}
