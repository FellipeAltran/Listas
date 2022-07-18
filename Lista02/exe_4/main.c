#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 04, Lista 02");

    float a;

    printf("Digite um numero: \n");
    scanf("%f", &a);

    if (a>0)
        printf("resultado: %.2f\n", a*2);
    else if (a<0)
        printf("Resultado: %.2f\n", a*3);

    return 0;
}
