#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 14, Lista 03\n");

    int n, soma=0;

    do{

        printf("Digite um numero: \n");
        scanf("%d", &n);

        if (n>=0){
            soma = soma + n;
        }
        if (n<0){
            printf("Programa encerrado\n");
            printf("Resultado da soma: %d\n", soma);
        }

    }while (n>=0);

    return 0;
}
