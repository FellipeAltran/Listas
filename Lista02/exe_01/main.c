#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Exercicio 01, lista 02\n");

    int a;
    int b;

    printf("Digite um numero: \n");
    scanf("%d", &a);
    printf("Digite um numero: \n");
    scanf("%d", &b);

    if (a>b)
        printf("%d %d\n", a,b);
    else
        printf("%d %d\n", b,a);

    return 0;
}
