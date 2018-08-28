// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//m) Escrever um programa que possibilite calcular a �rea total em metros de uma resid�ncia com os c�modos
//sala, cozinha, banheiro, dois quartos, �rea de servi�o, quintal, garagem, entre outros que podem ser
//fornecidos ao programa. O programa deve solicitar a entrada do nome, da largura e do comprimento de um
//determinado c�modo. Em seguida, deve apresentar a �rea do c�modo lido e tamb�m uma mensagem
//solicitando ao usu�rio a confirma��o de continuar calculando novos c�modos. Caso o usu�rio responda
//"N�O", o programa deve apresentar o valor total acumulado da �rea residencial.

#include<stdio.h>

int main() {
	
	float comprimento, largura, area, areaTotal;
	char opcao, nome[255];	

	areaTotal = 0;
	opcao = 's';
	
	do {
		printf("Informe o nome do comodo: ");
		gets(nome);

		printf("Informe o comprimento do comodo: ");
		scanf("%f", &comprimento);
		getchar();

		printf("Informe a largura do comodo: ");
		scanf("%f", &largura);
		getchar();

		area = comprimento * largura;
		areaTotal += area;

		printf("A area do comodo %s e %.1f metros quadrados.\n", nome, area);
		printf("Deseja continuar calculando valores? [s/n]: \n");

		opcao = getchar();
		getchar();

		if (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N') {

			printf("Opcao incorreta! Deseja continuar informando valores? [s/n]: \n");

			opcao = getchar();
			getchar();

		}
	} while (opcao == 's' || opcao == 'S');

	printf("A area total da residencia e %.2f metros quadrados.\n", areaTotal);
	
	return 0;
}
