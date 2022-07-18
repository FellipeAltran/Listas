#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 36\n");

    double sFun;
    double sMin = 1212.00;
    double c;

    printf("Qual o seu salario: \n");
    scanf("%lf", &sFun);

    c = sFun / sMin;

    printf("A quantidade de salarios minimos e: %.2lf\n", c);

    return 0;
}
