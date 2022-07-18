#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 3\n");

    float paoFrances;
    float broa;
    float totalVendas;
    float poupanca;

    printf("Paes vendidos: \n");
    scanf("%f", &paoFrances);

    printf("Broas vendidas: \n");
    scanf("%f", &broa);

    totalVendas = (paoFrances * 0.12) + (broa * 1.50);

    printf("O total das vendas e: %.1f\n", totalVendas);

    poupanca = totalVendas * 0.1;

    printf("O valor da poupanca e: %.1f\n", poupanca);

    return 0;
}
