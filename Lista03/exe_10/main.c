#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10, Lista 3\n");

    int n1;
    int n2=0;

    for (int i=1;i<=20;i++){

        printf("Digite um numero: \n");
        scanf("%d", &n1);

        if (n1%2==0)
            n2++;
    }
    printf("Quantidade de numeros pares: %d\n", n2);

    return 0;
}
