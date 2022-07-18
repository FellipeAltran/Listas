#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 33\n");

    double bmaior;
    double bmenor;
    double area;
    double altura;

    printf("Digite a base maior: \n");
    scanf("%lf", &bmaior);

    printf("Digite a base menor: \n");
    scanf("%lf", &bmenor);

    printf("Digite a altura: \n");
    scanf("%lf", &altura);

    area = (bmaior + bmenor)*altura/2;

    printf("Area do trapezio: %.2lf\n", area);

    return 0;
}
