#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 14\n");

    double pi = 3.14;
    double raio;
    double area;

    printf("Digite o raio: \n");
    scanf("%lf", &raio);

    area = pi * pow(raio,2);

    printf("O valor da area e: %.2lf \n", area);

    return 0;
}
