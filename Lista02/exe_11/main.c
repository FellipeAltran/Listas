#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11, Lista 02\n");

    char n;
    float q;

    printf("Digite seu nivel: \n");
    scanf("%c", &n);

    printf("Digite a quantidade de aulas: \n");
    scanf("%f", &q);

    if (n=='1')
        printf("Salario: %.2lf\n", 12.0*q*4.5);
    else if (n=='2')
        printf("Salario: %.2lf\n", 17.0*q*4.5);
    else if (n=='3')
        printf("Salario: %.2lf\n", 25.0*q*4.5);

    return 0;
}
