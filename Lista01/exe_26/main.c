#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 26\n");

    double n1;
    double n2;
    double n3;
    double soma;

    printf("Digite um numero: \n");
    scanf("%lf", &n1);

    printf("Digite um numero: \n");
    scanf("%lf", &n2);

    printf("Digite um numero: \n");
    scanf("%lf", &n3);

    soma = (n1 * n2 * n3);

    printf("Resultado: %.2lf\n", soma);


    return 0;
}
