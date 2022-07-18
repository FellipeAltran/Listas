#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 28\n");

    float n1;
    float n2;
    int peso1 = 2;
    int peso2 = 3;
    float media;

    printf("Digite um numero: \n");
    scanf("%f", &n1);

    printf("Digite um numero: \n");
    scanf("%f", &n2);

    media = (n1 + peso1) + (n2 + peso2) / (peso1 + peso2);

    printf("Resultado: %.2lf\n", media);

    return 0;
}
