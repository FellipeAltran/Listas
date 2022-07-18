#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 7\n");

    int dia;
    int mes;
    int totalDias;

    printf("Digite o dia: \n");
    scanf("%d", &dia);

    printf("Digite o mes: \n");
    scanf("%d", &mes);

    if (mes == 1)
        printf("O total de dias: %d \n", dia);

    if (mes == 12)
        printf("O total de dias: %d \n", (mes*30-30)+dia);

    return 0;

    totalDias = (30 * mes) + dia;

    printf("O total de dias: %d \n", totalDias);


    return 0;
}
