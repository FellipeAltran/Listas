#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 07, Lista 02\n");

    float alt, result;
    char sexo;


    printf("Escolha uma das opcoes (H,M)\n");
    scanf("%s", &sexo);

    printf("Digite sua altura: \n");
    scanf("%f", &alt);

    if (sexo=='H')
        printf("O peso ideal e: %.2f", (72.7*alt)-58.0);
    else if (sexo=='M')
        printf("O peso ideal e: %.2f", (62.1*alt)-44.7);

return 0;
}
