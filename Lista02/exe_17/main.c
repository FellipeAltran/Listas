#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 17, Lista 02\n");


    int d,q;

    printf("Qual lanche ira comprar? \nopcoes:\n");
    printf("---------------------\n");
    printf("|Cachorro quente = 1|\n");
    printf("|Bauru           = 2|\n");
    printf("|Misto quente    = 3|\n");
    printf("|Hamburguer      = 4|\n");
    printf("|Cheeseburguer   = 5|\n");
    printf("|Refrigerante    = 6|\n");
    printf("---------------------\n");
    scanf("%d", &d);
    printf("Quantidade: \n");
    scanf("%d", &q);

    if (d==1)
        printf("O preco do cachorro quente e: %.2f\n", 11.00*q);
    else if (d==2)
        printf("O preco do bauru e: %.2f\n", 8.50*q);
    else if (d==3)
        printf("O preco do misto quente e: %.2f\n", 8.00*q);
    else if (d==4)
        printf("O preco do hamburguer e: %.2f\n", 9.00*q);
    else if (d==5)
        printf("O preco do cheeseburguer e: %.2f\n", 10.00*q);
    else if (d==6)
        printf("O preco do refrigerante e: %.2f\n", 4.50*q);

    return 0;
}
