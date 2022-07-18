#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 4, Lista 3\n");

    char nome[20];
    int n;

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite um numero: \n");
    scanf("%d", &n);


    for (int i=1;i<=n;i++){
        printf("Seu nome e: %s\n", nome);
    }
    return 0;
}
