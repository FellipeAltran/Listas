#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11, Lista 3\n");

    float n1;
    int n2=0;

    for (int i=1;i<=20;i++){

        printf("Digite um numero: \n");
        scanf("%f", &n1);

        if ((n1>=0)&&(n1<=100))
            n2++;
    }
    printf("Numeros entre 0 e 100: %d\n", n2);

    return 0;
}
