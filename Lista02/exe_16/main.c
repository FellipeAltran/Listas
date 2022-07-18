#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 16, Lista 02\n");

    int s;

    printf("Digite seu saldo medio: \n");
    scanf("%d", &s);

    if ((s>=0)&&(s<=200))
        printf("Valor de credito: %.2f\nSaldo medio: %d\n", 0,s);
    else if ((s>=201)&&(s<=400))
        printf("Valor de credito: %.2f\nSaldo medio: %d\n", (s*0.2),s);
    else if ((s>=401)&&(s<=600))
        printf("Valor de credito: %.2f\nSaldo medio: %d\n", (s*0.3),s);
    else if (s>601)
        printf("Valor de credito: %.2f\nSaldo medio: %dd\n", (s*0.4),s);

    return 0;
}
