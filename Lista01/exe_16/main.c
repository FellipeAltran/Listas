#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 16\n");

    int sanduiche;
    double quantSand;
    double queijo;
    double carne;
    double presunto;


    printf("Quantos sanduiches ? \n");
    scanf("%d", &sanduiche);

    quantSand = sanduiche * 250 / 1000.0;
    queijo = sanduiche * 100 / 1000.0;
    carne = sanduiche * 100 / 1000.0;
    presunto = sanduiche * 50 / 1000.0;


    printf("A quantidade total: %.2lf\nCarne: %.2lf\nPresunto: %.2lf\nQueijo: %.2lf\n", quantSand, carne, presunto, queijo);

    return 0;
}
