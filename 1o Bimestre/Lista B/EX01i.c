// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* Em uma elei��o sindical concorreram ao cargo de presidente tr�s candidatos. Durante a apura��o dos votos
foram computados votos nulos e em branco, al�m dos votos v�lidos para cada candidato. Deve ser criado um
programa de computador que fa�a a leitura da quantidade de votos v�lidos para cada candidato, al�m ler
tamb�m a quantidade de votos nulos e em branco. Ao final o programa deve apresentar o n�mero total de
eleitores, considerando votos v�lidos, nulos e em branco; o percentual correspondente de votos v�lidos em
rela��o � quantidade de eleitores; o percentual correspondente de votos v�lidos do candidato A em rela��o �
quantidade de eleitores; o percentual correspondente de votos v�lidos do candidato B em rela��o � quantidade
de eleitores; o percentual correspondente de votos v�lidos do candidato C em rela��o � quantidade de eleitores;
o percentual correspondente de votos nulos em rela��o � quantidade de eleitores; e por �ltimo o percentual
correspondente de votos em branco em rela��o � quantidade de eleitores.  */

#include <stdio.h>

int main() {

    int votosA, votosB, votosC, votosNulos, votosEmBranco, eleitores;

    printf("Digite o numero de votos do candidato A: ");
    scanf("%d", &votosA);
    
    printf("Digite o numero de votos do candidato B: ");
    scanf("%d", &votosB);
    
    printf("Digite o numero de votos do candidato C: ");
    scanf("%d", &votosC);
    
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);
    
    printf("Digite o numero de votos em branco: ");
    scanf("%d", &votosEmBranco);
    
    eleitores = votosA + votosB + votosC + votosNulos + votosEmBranco;
    
    printf("---------------------");
    printf("\nNumero de Eleitores: %d", eleitores);
    
    float votosValidos = ((votosA + votosB + votosC) * 100) / eleitores;
    
    float votosValidosA = (votosA * 100) / eleitores;
    
    float votosValidosB = (votosB * 100) / eleitores;
    
    float votosValidosC = (votosC * 100) / eleitores;
    
    float percentualVotosNulos = (votosNulos * 100) / eleitores;
    
    float percentualVotosEmBranco = (votosEmBranco * 100) / eleitores;
    
    printf("\nPercentual de votos validos: %.2f", votosValidos);
    printf("\nPercentual de votos do candidato A: %.2f", votosValidosA);
    printf("\nPercentual de votos do candidato A: %.2f", votosValidosB);
    printf("\nPercentual de votos do candidato A: %.2f", votosValidosC);
    printf("\nPercentual de votos nulos: %.2f", percentualVotosNulos);
    printf("\nPercentual de votos em branco: %.2f", percentualVotosEmBranco);
    
    return 0;
}
