#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 02, Lista 02\n");

    int n;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    if (n%2==0)
        printf("O numero %d e par\n", n);
    else
        printf("O numero %d e impar\n", n);

    return 0;
}
