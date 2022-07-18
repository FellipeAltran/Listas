#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12\n");

    double salario;
    double aumento;
    double imposto;

    printf("Digite seu salario atual: \n");
    scanf("%lf", &salario);

    aumento = salario + (salario * 0.15);
    imposto = aumento - (aumento * 0.08);

    printf("%.2lf\n%.2lf\n", aumento, imposto);

    return 0;
}
