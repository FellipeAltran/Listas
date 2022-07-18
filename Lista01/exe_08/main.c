#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 8\n");

    float notaUm;
    float notaDois;
    float notaTres;
    float media;


    printf("Digite a primeira nota: \n");
    scanf("%f", &notaUm);

    printf("Digite a segunda nota: \n");
    scanf("%f", &notaDois);

    printf("Digite a terceira nota: \n");
    scanf("%f", &notaTres);

    media = (notaUm + notaDois + notaTres) / 3;

    printf("Sua media final e: %.2f \n", media);

    return 0;
}
