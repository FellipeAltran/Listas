#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11\n");

    int dias;
    float ano,mes;


    printf("A quantos dias estamos sem acidente ? \n");
    scanf("%d", &dias);

    ano = dias / 360;
    dias = dias % 360;
    mes = dias / 30.0;
    dias = dias % 30;

    printf("Estamos a %d dias\n%.2f messes e\n%.2f anos sem acidentes\n", dias, mes, ano);


    return 0;
}
