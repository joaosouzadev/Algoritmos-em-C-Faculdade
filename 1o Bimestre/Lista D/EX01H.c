// Aluno: Jo�o Victor Moreira de Souza
// Turma: 2017/2

//h) Escrever um programa que calcule e apresente o somat�rio do n�mero de gr�os de trigo que se pode obter 
//num tabuleiro de xadrez, obedecendo � seguinte regra: colocar um gr�o de trigo no primeiro quadro e nos
//quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um gr�o, no segundo
//quadro colocam-se dois gr�os (neste momento t�m-se tr�s gr�os), no terceiro quadro colocam-se quatro
//gr�os (tendo neste momento sete gr�os), no quarto quadro colocam-se oito gr�os (tendo-se ent�o 15 gr�os)
//at� atingira sexag�simo quarto quadro.

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
