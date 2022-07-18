#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 14, Lista 02\n");

    int data;
    double valor;

    printf("Qual o ano do carro: \n");
    scanf("%d", &data);
    printf("Qual o valor do carro: \n");
    scanf("%lf", &valor);

    if (data<=1990)
        printf("O imposto a ser pago: %.2lf\n", valor*0.01);
    else
        printf("O imposto a ser pago: %.2lf\n", valor*0.015);

    return 0;
}
