#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 06, Lista 02\n");

    float n1;
    float n2;
    float n3;

    printf("Digite um numero: \n");
    scanf("%f", &n1);
    printf("Digite um numero: \n");
    scanf("%f", &n2);
    printf("Digite um numero: \n");
    scanf("%f", &n3);

     if ((n1>=n2) && (n1>=n3)){
        if (n3>=n2)
        printf("%.2f %.2f %.2f\n", n1,n3,n2);
        else
        printf("%.2f %d.2f %.2f\n", n1,n2,n3);
    }
    if ((n2>n1) && (n2>n3)){
        if (n3>n1)
        printf(".2f %.2f %.2f\n", n2,n3,n1);
        else
        printf("%.2f %.2f %.2f\n", n2,n1,n3);
    }
    if ((n3>n1) && (n3>n2)){
        if (n2>n1)
        printf("%.2f %.2f %.2f\n", n3,n2,n1);
        else
        printf("%.2f %.2f %.2f\n", n3,n1,n2);

    }
    return 0;
}
