// Jo�o Victor Moreira de Souza
// Turma: 2017/2

/* a) Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit. A f�rmula de convers�o
� F:=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

#include <stdio.h>

int main() {

    float celsius, fahrenheit;

    printf("Digite uma temperatura em Celsius: ");

    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160)/5;

    printf("Temperatura convertida para Fahrenheit: %.1f;", fahrenheit);
    
    return 0;
}
