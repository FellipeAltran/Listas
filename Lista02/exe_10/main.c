#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10, Lista\n");

    int n1, n2;

    printf("Digite um numero: \n");
    scanf("%d", &n1);

    printf("Digite um numero: \n");
    scanf("%d", &n2);

    if (n1>n2)
        printf("O valor final: %d\n", n1/n2);
    else if (n2>n1)
        printf("O valor final: %d\n", n2/n1);

    return 0;
}
