// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* i) Efetuar a leitura de um nome e o sexo de uma pessoa e apresentar como sa�da uma das seguintes mensagens:
"llmo, Sr,", caso seja informado o sexo masculino, ou "llma, Sra,", caso seja informado o sexo feminino. Ap�s a
mensagem de sauda��o, apresentar o nome informado. O programa deve, ap�s a entrada do sexo, verificar
primeiramente se o sexo fornecido � realmente v�lido, ou seja, se � igual a "M" ou a "F". N�o sendo essa
condi��o verdadeira, o programa deve apresentar a mensagem "Sexo informado inv�lido". */

#include<stdio.h>

int main(){
	
	char sexo, nome[225];
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu sexo (M ou F): ");
	scanf("%c", &sexo);
	
	if (sexo == 'M' || sexo == 'F') {
		if (sexo == 'M') {
			printf("Ilmo. Sr. %s", nome);
		} else {
			printf("Ilma. Sra. %s", nome);
		}
	} else {
		printf("Sexo informado invalido");
	}
	
	return 0;
}
