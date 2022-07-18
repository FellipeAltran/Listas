#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 05, Lista 02\n");

    int a;

    printf("Digite um numero: \n");
    scanf("%d", &a);

    if (a%2==0)
        printf("resultado: %d\n", a+5);
    else
        printf("Resultado: %d\n", a+8);

    return 0;
}
