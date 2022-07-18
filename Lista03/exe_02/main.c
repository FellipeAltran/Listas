#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 02, Lista 03\n");

    int a,b,soma=0;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);
    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    for(int i=a;i<=b;i++){
        soma = (soma + i);
        printf("%d\n", soma);
    }
    return 0;
}
