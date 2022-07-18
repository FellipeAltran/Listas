#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 24\n");

    float agua = 8;
    float suco = 2;
    double litros;
    double quantSuco;
    double quantAgua;

    printf("Quantos litros deseja? \n");
    scanf("%lf", &litros);

    quantAgua = litros * agua;
    quantSuco = litros * suco;

    printf("Quantidade de agua necessaria e: %.2lf\n A quantidade de suco necessaria e: %.2lf\n", quantAgua, quantSuco);

    return 0;
}
