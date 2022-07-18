#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 20\n");

    int blusa;
    int novelos = 5;
    int quanTotal;

    printf("Quantas blusas deseja fazer? \n");
    scanf("%d", &blusa);

    quanTotal = blusa * novelos;

    printf("Quantidade de novelos e: %d\n", quanTotal);

    return 0;
}
