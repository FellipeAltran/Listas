#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 4\n");

    int idade;
    int diasDeVida;
    char nome[30];

    printf("Qual a sua idade: \n");
    scanf("%d", &idade);

    printf("Qual o seu nome: \n");
    scanf("%s", nome);

    diasDeVida = idade * 365;

    printf("Ola %s voce viveu um total de %d dias de vida \n", nome, diasDeVida);

    return 0;
}
