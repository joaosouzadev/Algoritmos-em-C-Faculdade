// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que
faz 12 quil�metros por litro. Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto e a velocidade m�dia
durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA:= TEMPO*
VELOCIDADE. A partir do valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na
viagem com a f�rmula LITROS_USADOS := DISTANCIA/12. O programa deve apresentar os valores da
velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem. */

#include <stdio.h>

int main() {

    float tempoGasto, velocidadeMedia, distancia, litrosUsados;
    
    printf("Digite o tempo gasto na viagem: ");
    
    scanf("%f", &tempoGasto);
    
    printf("Digite a velocidade media da viagem: ");
    
    scanf("%f", &velocidadeMedia);
    
    distancia = tempoGasto * velocidadeMedia;
    
    litrosUsados = distancia / 12;
    
    printf("Velocidade media: %.2f km/h", velocidadeMedia);
    printf("\nTempo gasto: %.1f horas", tempoGasto);
    printf("\nDistancia percorrida: %.2f km", distancia);
    printf("\nLitros utilizados na viagem: %.2fL", litrosUsados);
    
    return 0;
}
