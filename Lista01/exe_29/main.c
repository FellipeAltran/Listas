#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 29\n");

    float produto;
    float desconto;

    printf("Digite o valor: \n");
    scanf("%f", &produto);

    desconto  = produto - (produto * 0.1);

    printf("Resultado: %.2f\n", desconto);

    return 0;
}
