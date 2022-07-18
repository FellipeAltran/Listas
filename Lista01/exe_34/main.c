#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 34\n");

    double lado1;
    double lado2;
    double area;

    printf("Digite o primeiro lado: \n");
    scanf("%lf", &lado1);

    printf("Digite o segundo lado: \n");
    scanf("%lf", &lado2);

    area = lado1 * lado2;

    printf("Area do quadrado: %.2lf\n", area);
    return 0;
}
