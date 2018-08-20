// João Victor Moreira de Souza
// Turma: 2017/2

/* Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que
faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto e a velocidade média
durante a viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA:= TEMPO*
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula LITROS_USADOS := DISTANCIA/12. O programa deve apresentar os valores da
velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem. */

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
