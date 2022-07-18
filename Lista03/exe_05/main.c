#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 5, Lista 03\n");

    int n;
    int soma;

    for (int i=1;i<=10;i++){
    printf("Digite um numero: \n");
    scanf("%d", &n);
    soma = soma + n;
    }
    printf("%d\n", soma);

    return 0;
}
