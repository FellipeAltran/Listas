#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 17\n");

    double celsius;
    double fahrenheit;

    printf("Qual a temperatura em Celsius? \n");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 1.8 +32;

    printf("O valor em farenheit e: %.2lf \n", fahrenheit);

    return 0;
}
