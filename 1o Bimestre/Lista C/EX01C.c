// Aluno: João Victor Moreira de Souza
// Turma: 2017/2

/* c) Efetuar a leitura de três valores numéricos e processar o cálculo da equação completa de segundo grau,
utilizando a fórmula de Bhaskara (considerar para a solução do problema todas as possíveis condições para
delta: delta < 0 - não há solução real, delta > 0 - há duas soluções reais e diferentes e delta = 0 - há apenas
uma solução real). Lembre-se de que é completa a equação de segundo grau que possui todos os coeficientes
A, B e C diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas para
delta. */

#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b, c, delta, raiz, x, x1, x2;
	
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	if (a  == 0) {
		printf("\nO valor de 'A' nao pode ser zero, pois teremos uma equacao do primeiro grau");
	} else {
		delta = (b*b) - 4*a*c;
		if (delta == 0) {
			x = -b / (2 * a);
			printf("\nHa apenas uma solucao real: %.1f", x);
		} else {
			if (delta > 0){
				raiz = sqrt(delta); // raiz quadrada
				x1 = (-b+raiz)/2*a;;
				x2 = (-b-raiz)/2*a;;
				printf("\nHa duas solucoes reais: %.1f e %.1f", x1, x2);
			} else {
				printf("\nNao existem raizes reais pois o delta -> %.2f <- e negativo.", delta);
			}
		}
	}
	
	return 0;
}
