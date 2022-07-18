#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 22\n");

    double moedasUm;
    double moedasCinco;
    double moedasDez;
    double moedasVinteCinco;
    double moedasCinquenta;
    double moedasReal;
    double valorTotal;

    printf("Moedas de um centavo: \n");
    scanf("%lf", &moedasUm);

    printf("Moedas de cinco: \n");
    scanf("%lf", &moedasCinco);

    printf("Moedas de dez: \n");
    scanf("%lf", &moedasDez);

    printf("Moedas de vinte cinco: \n");
    scanf("%lf", &moedasVinteCinco);

    printf("Moedas de cinquenta: \n");
    scanf("%lf", &moedasCinquenta);

    printf("Moedas de um real: \n");
    scanf("%lf", &moedasReal);

    valorTotal = (moedasUm * 0.01) + (moedasCinco * 0.05) + (moedasDez * 0.1) + (moedasVinteCinco * 0.25) + (moedasCinquenta * 0.5) + (moedasReal * 1);

    printf("O valor total: %.2lf\n", valorTotal);
    return 0;
}
