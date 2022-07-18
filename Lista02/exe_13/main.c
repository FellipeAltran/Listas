#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13, Lista 02\n");

    int real;
    int v100, v50, v10, v5, v1;

    printf("Digite um valor: \n");
    scanf("%d", &real);

    if (real>=100){
        v100=real/100;
        printf("Notas de cem: %d\n", v100);
    }
    real=real-v100*100;

    if (real>=50){
        v50=real/50;
        printf("Notas de cinquenta: %d\n", v50);
    }
    real=real-v50*50;

    if (real>=10){
        v10=real/10;
        printf("Notas de dez: %d\n", v10);
    }
    real=real-v10*10;

    if (real>=5){
        v5=real/5;
        printf("Notas de cinco: %d\n", v5);
    }
    real=real-v5*5;

    if (real>=1){
        v1=real/1;
        printf("Moedas de um: %d\n", v1);
    }

    return 0;
}
