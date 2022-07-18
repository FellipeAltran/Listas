#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 35\n");

    double dmaior;
    double dmenor;
    double area;

    printf("Digite a diagonal maior: \n");
    scanf("%lf", &dmaior);

    printf("Digite a diagonal menor: \n");
    scanf("%lf", &dmenor);

    area = (dmaior * dmenor)/2;

    printf("Area do lozango: %.2lf\n", area);

    return 0;
}
