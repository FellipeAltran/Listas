#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 32\n");

    float peso;
    float gramas;

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    gramas = peso * 1000;


    printf("Seu peso em gramas: %.2f g\n", gramas);

    return 0;
}
