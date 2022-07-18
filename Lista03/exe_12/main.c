#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12, Lista\n");


    float n1;
    int n2=0, n3=0, n4=0;

    for (int i=1;i<=20;i++){

        printf("Digite um numero: \n");
        scanf("%f", &n1);

        if ((n1>=0)&&(n1<=100))
            n2++;
        else if ((n1>=101)&&(n1<=200))
            n3++;
        else if (n1>=201)
            n4++;
    }
    printf("Numeros entre 0 e 100: %d\n", n2);
    printf("Numeros entre 101 e 200: %d\n", n3);
    printf("Numeros maiores que 200: %d\n", n4);

    return 0;
}
