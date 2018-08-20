// João Victor Moreira de Souza
// Turma: 2017/2

/* Em uma eleição sindical concorreram ao cargo de presidente três candidatos. Durante a apuração dos votos
foram computados votos nulos e em branco, além dos votos válidos para cada candidato. Deve ser criado um
programa de computador que faça a leitura da quantidade de votos válidos para cada candidato, além ler
também a quantidade de votos nulos e em branco. Ao final o programa deve apresentar o número total de
eleitores, considerando votos válidos, nulos e em branco; o percentual correspondente de votos válidos em
relação à quantidade de eleitores; o percentual correspondente de votos válidos do candidato A em relação à
quantidade de eleitores; o percentual correspondente de votos válidos do candidato B em relação à quantidade
de eleitores; o percentual correspondente de votos válidos do candidato C em relação à quantidade de eleitores;
o percentual correspondente de votos nulos em relação à quantidade de eleitores; e por último o percentual
correspondente de votos em branco em relação à quantidade de eleitores.  */

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
