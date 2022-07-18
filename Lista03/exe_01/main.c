#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 01, Lista 03\n");

    char texto[30];

    printf("Digite uma mensagem: \n");
    scanf("%s", texto);

    for (int i=1;i<=20;i++){
        printf("A mensagem e %d: %s\n", i,texto);
    }
    return 0;
}
