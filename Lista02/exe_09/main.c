#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 09, Lista 02\n");

    int id;
    float n1, n2, n3;
    float mf;

    printf("Digite o id: \n");
    scanf("%d", &id);

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);

    mf = n1+n2+n3/3;

    if (mf>=8.0)
        printf("Voce foi aprovado! \n");
    else if (mf<=7.9)
        printf("Voce foi reprovado :(\n");

    return 0;
}
