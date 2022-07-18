#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 08, Lista 02\n");

    char f;
    double p;

    printf("Qual a forma de pagamento: \n");
    scanf("%c", &f);
    printf("Qual o valor do produto: \n");
    scanf("%lf", &p);

    if (f=='a')
        printf("O valor a se pagar e: %.2lf\n", p-(p*0.1));
    else if (f=='b')
        printf("O valor a se pagar e: %.2lf\n", p-(p*0.15));
    else if (f=='c')
        printf("O valor a se pagar sao de duas parcelas de: %.2lf\n", p/2);
    else if (f=='d')
        printf("O valor a se pagar sao de duas parcelas com juros de: %.2lf\n", p+(p*0.1)/2);

    return 0;
}
