// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

//h) Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode obter 
//num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro quadro e nos
//quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um grão, no segundo
//quadro colocam-se dois grãos (neste momento têm-se três grãos), no terceiro quadro colocam-se quatro
//grãos (tendo neste momento sete grãos), no quarto quadro colocam-se oito grãos (tendo-se então 15 grãos)
//até atingira sexagésimo quarto quadro.

#include<stdio.h>

int main() {
	
	int casa = 1, quantidade = 1;
	int unsigned long long grao = 0LLU;
	
	while (casa<=64) {
		grao = grao + quantidade;
		quantidade = 2 * quantidade;
		casa++;
	}
	printf("Quantidade de graos: %llu", grao);
	
	return 0;
}
