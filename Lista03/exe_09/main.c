#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 9, Lista 3\n");

    float n1;
    int n2=0;

    for (int i=1;i<=20;i++){

        printf("Digite um numero: \n");
        scanf("%f", &n1);

        if (n1>=8)
            n2++;
    }
    printf("Numeros maiores que 8: %d\n", n2);

    return 0;
}
