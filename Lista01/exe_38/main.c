#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 38\n");

    int ano;
    int anoAtual;
    int anos1;
    int messes;
    int dias;
    int semanas;

    printf("Digite o ano do seu nascimento: \n");
    scanf("%d", &ano);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);

    anos1 = anoAtual - ano;
    messes = anos1 * 12;
    dias = messes * 30;
    semanas = dias / 7;

    printf("Anos: %d\n", anos1);
    printf("Messes: %d\n", messes);
    printf("Dias: %d\n", dias);
    printf("Semanas: %d\n", semanas);

    return 0;
}
