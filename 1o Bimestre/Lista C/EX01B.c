// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* b) Ler os valores de quatro notas escolares bimestrais de um aluno. Calcular a m�dia aritm�tica desse aluno e
apresentar a mensagem "Aprovado" se a m�dia obtida for maior ou igual a 7; caso contr�rio, o programa deve
solicitar a quinta nota (nota de exame) do aluno e calcular uma nova m�dia aritm�tica entre a nota de exame e
a primeira m�dia aritm�tica. Se o valor da nova m�dia for maior ou igual a sete, apresentar a mensagem
"Aprovado em exame"; caso contr�rio, apresentar a mensagem "Reprovado". Informar tamb�m, ap�s a
apresenta��o das mensagens, o valor da m�dia obtida pelo aluno */

#include<stdio.h>

int main(){
	
	int nota1, nota2, nota3, nota4, nota5;
	float media, mediaExame;
	
	printf("Digite a primeira nota\n");
	scanf("%d", &nota1);
	
	printf("\nDigite a segunda nota");
	scanf("%d", &nota2);
	
	printf("\nDigite a terceira nota");
	scanf("%d", &nota3);
	
	printf("\nDigite a quarta nota");
	scanf("%d", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("\nA media e: %.1f", media);
	
	if (media >= 70) {
		printf("\nVoce esta aprovado");
	} else {
		printf("\nDigite a quinta nota");
		scanf("%d", &nota5);
		
		mediaExame = (media + nota5) / 2;
		
		if (mediaExame >= 70) {
			printf("\nAprovado em exame com media: %.1f", mediaExame);
		} else {
			printf("\nReprovado com media: %.1f", mediaExame);
		}
	}
	
	return 0;
}
