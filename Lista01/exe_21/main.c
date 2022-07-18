#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 21\n");

    float lata;
    float garrafa;
    float litrao;
    float litroTotal;

    printf("Quantas latas deseja: \n");
    scanf("%f", &lata);

    printf("Quantas garrafas deseja: \n");
    scanf("%f", &garrafa);

    printf("Quantos litraos deseja: \n");
    scanf("%f", &litrao);

    litroTotal = (lata * 0.35) + (garrafa * 0.6) + (litrao * 2);

    printf("Litros total: %.2f litros\n", litroTotal);

    return 0;
}
