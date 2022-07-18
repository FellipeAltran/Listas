#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 7, Lista 3\n");

    int n;
    int Midade=0;

    for (int i=1;i<=20;i++){
    printf("Digite uma idade: \n");
    scanf("%d", &n);
        if (n>=18)
            Midade++;
    }
    printf("A quatidade de pessoas maiores de idade sao: %d\n", Midade);

    return 0;
}
