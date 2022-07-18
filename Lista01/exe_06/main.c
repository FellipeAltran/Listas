#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 6\n");

    float peso;
    float valorTotal;

    printf("Total de peso: \n");
    scanf("%f", &peso);

    valorTotal = peso * 12.00;

    printf("O preco a se pagar e: %.2f \n", valorTotal);

    return 0;
}
