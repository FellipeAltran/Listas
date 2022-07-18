#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 19\n");

    int frangos;
    double valorTotal;
    int totalPatas;

    printf("Quatidade de frangos: \n");
    scanf("%d", &frangos);

    totalPatas = frangos * 2;
    valorTotal = frangos * (2 * 4.0) + frangos * 3.5;

    printf("O gasto total: %.2lf \n", valorTotal);


    return 0;
}
