#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 27\n");

    double n1;
    double n2;
    double soma;

    printf("Digite um numero: \n");
    scanf("%lf", &n1);

    printf("Digite um numero: \n");
    scanf("%lf", &n2);

    soma = n1 / n2;

    printf("Resultado: %.2lf\n", soma);

    return 0;
}
