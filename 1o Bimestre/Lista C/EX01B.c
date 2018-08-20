// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* b) Ler os valores de quatro notas escolares bimestrais de um aluno. Calcular a média aritmética desse aluno e
apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
solicitar a quinta nota (nota de exame) do aluno e calcular uma nova média aritmética entre a nota de exame e
a primeira média aritmética. Se o valor da nova média for maior ou igual a sete, apresentar a mensagem
"Aprovado em exame"; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a
apresentação das mensagens, o valor da média obtida pelo aluno */

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
