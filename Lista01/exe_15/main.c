#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 15\n");

    double valorTotal;
    int carlosAndre;
    double felipe;


    printf("Qual o valor total ? \n");
    scanf("%lf", &valorTotal);

    carlosAndre = valorTotal / 3;
    felipe = valorTotal - (2 * carlosAndre);

    printf("Carlos: %d\n Andre: %d\n Felipe: %.2lf\n", carlosAndre, carlosAndre, felipe);

    return 0;
}
