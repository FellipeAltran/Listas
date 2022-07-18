#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 15, Lista 02\n");

    int c;
    double s;

    printf("Digite seu cargo: \n");
    scanf("%d", &c);
    printf("Digite seu salario: \n");
    scanf("%lf", &s);

    if (c==101)
        printf("Salario: %.2lf\n", s+(s*0.1));
    else if (c==102)
        printf("Salario: %.2lf\n", s+(s*0.2));
    else if (c==103)
        printf("Salario: %.2lf\n", s+(s*0.3));
    else
        printf("Salario: %.2lf\n", s+(s*0.4));


    return 0;
}
