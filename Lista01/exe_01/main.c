#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 1\n");

    double comprimento;
    double largura;
    double somaArea;

    printf("Digite o comprimento: \n");
    scanf("%lf", &comprimento);

    printf("Digite a largura: \n");
    scanf("%lf", &largura);

    somaArea = comprimento * largura;

    printf("A area do terreno e: %.3lf\n", somaArea);

    return 0;
}
