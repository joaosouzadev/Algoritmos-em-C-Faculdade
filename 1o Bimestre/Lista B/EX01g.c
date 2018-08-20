// João Victor Moreira de Souza
// Turma: 2017/2

/* Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar (US$). O
programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário. */

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
