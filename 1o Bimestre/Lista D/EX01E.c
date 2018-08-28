// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//e) Escrever um programa que apresente os valores da sequ�ncia num�rica de Fibonacci at� o d�cimo quinto
//termo. A sequ�ncia de Fibonacci � formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc.,
//obtendo-se o pr�ximo termo a partir da soma do termo atual com o anterior sucessivamente at� o infinito se
//a sequ�ncia n�o for interrompida.

#include<stdio.h>

int main() {
	
    int n, termo = 15, numero = 0, transicao2 = 1, proximoTermo;

    printf("Sequencia de Fibonacci: ");

    for (n = 1; n <= termo; n++)
    {
        printf("%d ", numero);
        proximoTermo = numero + transicao2;
        numero = transicao2;
        transicao2 = proximoTermo;
    }
    return 0;
}
