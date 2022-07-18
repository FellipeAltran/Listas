#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 2\n");

    int numCavalos;
    int numFerraduras;
    int patas = 4;

    printf("Quantos cavalos foram comprados: \n");
    scanf("%d", &numCavalos);

    numFerraduras = numCavalos * patas;

    printf("O numero de ferraduras necessarias e: %d \n", numFerraduras);

    return 0;
}
