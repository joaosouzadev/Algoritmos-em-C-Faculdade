// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* h) Efetuar a leitura de um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O programa deve
apresentar a mensagem "O valor está na faixa permitida", caso o valor informado esteja entre 1 e 9. Se o valor
estiver fora da faixa, o programa deve apresentar a mensagem "O valor está fora da faixa permitida". */

#include<stdio.h>

int main(){
	
	int a;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	if (a >= 1 && a <= 9){
		printf("O numero esta dentro da faixa permitida", a);
	} else {
		printf("O numero esta fora da faixa permitida", a);
	}
	
	return 0;
}
