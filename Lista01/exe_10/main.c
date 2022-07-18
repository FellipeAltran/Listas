#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10\n");

    double pontoX1;
    double pontoY1;
    double pontoX2;
    double pontoY2;
    double distancia;

    printf("Digite o primeiro eixo x: \n");
    scanf("%lf", &pontoX1);

    printf("Digite o primeiro eixo y: \n");
    scanf("%lf", &pontoY1);

    printf("Digite o segundo eixo x: \n");
    scanf("%lf", &pontoX2);

    printf("Digite o segundo eixo y: \n");
    scanf("%lf", &pontoY2);

    distancia =  pow(pow(pontoX1 - pontoX2,2) + pow(pontoY1 - pontoY2,2), 0.5);

    printf("A distancia entre os pontos e: %.2lf \n", distancia);


    return 0;
}
