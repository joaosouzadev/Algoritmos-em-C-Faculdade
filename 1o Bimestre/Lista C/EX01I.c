// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* i) Efetuar a leitura de um nome e o sexo de uma pessoa e apresentar como saída uma das seguintes mensagens:
"llmo, Sr,", caso seja informado o sexo masculino, ou "llma, Sra,", caso seja informado o sexo feminino. Após a
mensagem de saudação, apresentar o nome informado. O programa deve, após a entrada do sexo, verificar
primeiramente se o sexo fornecido é realmente válido, ou seja, se é igual a "M" ou a "F". Não sendo essa
condição verdadeira, o programa deve apresentar a mensagem "Sexo informado inválido". */

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
