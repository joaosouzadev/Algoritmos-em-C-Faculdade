// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

#include<stdio.h>

int main() {
	
	/* 1ª chave: tamanho de caracteres na string,
	   2º chave: numero de elementos no array */
    char nome[10][10];
    
    int i; // para contar os indices do array
	int n = 10; // apenas para delimitar o print (tamanho do array (10 elementos))
    
    printf("Digite 10 nomes:\n");
    
    // lê os nomes e atribui valor para os elementos
	// vetor com 10 elementos vai de 0 a 9
	// ex: nome[0], nome[1]... nome[9]
    for(i=0; i<n; ++i) {
        scanf("%s", nome[i]);
	}
        
    printf("\nOs nomes sao:\n");
    
    // printa os elementos do array
    for(i=0; i<n; ++i) {
        printf("%s\n", nome[i]);
	}
}
