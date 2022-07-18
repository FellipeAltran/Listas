#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Exercicio 40\n");

    double c1;
    double c2;
    double h;

    printf("Digite o primeiro cateto: \n");
    scanf("%lf", &c1);

    printf("Digite o segundo cateto: \n");
    scanf("%lf", &c2);

    h = sqrt(pow(c1,2) + pow(c2,2));

    printf("A hipotenusa: %.2lf\n", h);
    return 0;
}
