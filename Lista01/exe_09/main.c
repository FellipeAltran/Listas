#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 9 \n");

    int camisaP;
    int camisaM;
    int camisaG;
    float valorTotal;

    printf("Quantas camisas P deseja comprar? \n");
    scanf("%d", &camisaP);

    printf("Quantas camisas M deseja comprar? \n");
    scanf("%d", &camisaM);

    printf("Quantas camisas G deseja comprar? \n");
    scanf("%d", &camisaG);

    valorTotal = (camisaP * 10) + (camisaM * 12) + (camisaG * 15);

    printf("O valor total a se pagar e: %.2f", valorTotal);

    return 0;

}
