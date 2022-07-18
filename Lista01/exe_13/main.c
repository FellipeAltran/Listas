#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicios 13\n");

    int total;
    int centena;
    int dezena;
    int unidade;

    printf("Digite um numero de tres digitos: \n");
    scanf("%d", &total);

    centena = total / 100;
    dezena = (total - (100 * centena)) / 10;
    unidade = (total - (100 * centena)) - dezena * 10;

    printf("Centena:%d\n Dezena:%d\n Unidade:%d\n", centena, dezena, unidade);



    return 0;
}
