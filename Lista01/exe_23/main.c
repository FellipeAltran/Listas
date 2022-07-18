#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 23\n");

    float altura = 1.80;
    double sombraP;
    double sombraH;
    double alturaPredio;

    printf("Digite o valor da sombra do predio: \n");
    scanf("%lf", &sombraP);

    printf("Digite o valor da sua sombra: \n");
    scanf("%lf", &sombraH);

    alturaPredio = (sombraP/altura)*sombraH;

    printf("A altura do predio e: %.2lf metros\n", alturaPredio);

    return 0;
}
