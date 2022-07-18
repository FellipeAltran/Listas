#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 5\n");

    double gasolina;
    double litrosGa;

    printf("Quantos reais ira colocar? \n");
    scanf("%lf", &gasolina);

    litrosGa = gasolina / 6.50;

    printf("Deram %.2lf litros de gasolina!\n", litrosGa);

    return 0;
}
