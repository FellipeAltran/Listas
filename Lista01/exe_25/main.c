#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 25\n");

    double raio;
    double altura;
    double volume;
    float pi = 3.14;

    printf("Qual o raio do cilindro? \n");
    scanf("%lf", &raio);

    printf("Qual a altura do cilindro? \n");
    scanf("%lf", &altura);

    volume = pi * pow(raio,2) * altura;

    printf("O volume e: %.2lf\n", volume);

    return 0;
}
