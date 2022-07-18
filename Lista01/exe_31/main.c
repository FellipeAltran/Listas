#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 31\n");

    float peso;
    float eng;
    float ema;

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    eng = peso + (peso * 0.15);
    ema = peso - (peso * 0.2);

    printf("Seu peso apos engordar: %.2f\n", eng);
    printf("Seu peso apos emagrecer: %.2f\n", ema);

    return 0;
}
