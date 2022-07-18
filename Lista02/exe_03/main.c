#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 03, Listas 02\n");

    float a;
    float b;

    printf("Digite um numero: \n");
    scanf("%f", &a);
    printf("Digite um numero: \n");
    scanf("%f", &b);

    if (a==b)
        printf("Resultado: %.2f\n", a+b);
    else
        printf("Resultado: %.2f\n", a*b);

    return 0;
}
