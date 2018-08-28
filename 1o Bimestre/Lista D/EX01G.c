// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

//g) Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit, de
//dez em dez graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
//programa deve apresentar os valores das duas temperaturas.


#include<stdio.h>

int main() {
	
    int celsius = 10, f;

	while(celsius < 101) {
		f = (9*celsius+160)/5;
		printf("\n%d graus Celsius equivalem a %d graus Fahrenheit", celsius, f);
		
		celsius = celsius + 10;
    }
    
    return 0;
}
