#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 39\n");

    float c1 = 200.00;
    float c2 = 120.00;
    float salario = 1200.00;
    float c3;
    float c4;
    float sobra;

    c3 = c1 + (c1*0.02);
    c4 = c2 + (c2*0.02);
    sobra = salario - (c3 + c4);

    printf("O restante do salario e: %.2f\n", sobra);

    return 0;
}
