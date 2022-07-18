#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 01, Lista 03\n");

    char nome[20];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    for (int i=1;i<=10;i++){
        printf("Seu nome e: %s\n", nome);
    }
    return 0;
}
