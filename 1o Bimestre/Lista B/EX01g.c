// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* Elaborar um programa que apresente o valor da convers�o em real (R$) de um valor lido em d�lar (US$). O
programa deve solicitar o valor da cota��o do d�lar e tamb�m a quantidade de d�lares dispon�vel com o usu�rio. */

#include <stdio.h>

int main() {

    float cotacaoDolar, dolar, valorEmReal;

    printf("Digite a cotacao diaria do Dolar: ");
    scanf("%f", &cotacaoDolar);
    
    printf("Digite sua quantidade de dolares: ");
    scanf("%f", &dolar);
    
    valorEmReal = dolar * cotacaoDolar;
    
    printf("\nValor em reais: R$ %.2f", valorEmReal);
    
    return 0;
}
