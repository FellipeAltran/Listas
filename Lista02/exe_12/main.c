#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12, Lista 02\n");

    float x, y, z;

    printf("Digite um lado: \n");
    scanf("%f", &x);
    printf("Digite um lado: \n");
    scanf("%f", &y);
     printf("Digite um lado: \n");
    scanf("%f", &z);

    if ((x+y>z)&&(y+z>x)&&(z+x>y)){
        printf("E um triangulo!\n");

        if ((x==y)&&(y==z))
        printf("Equilatero\n");

        if (((x==y)&&(x!=z))||((y==z)&&(y!=x))||((z==x)&&(z!=y)))
        printf("Isosceles\n");

        if ((x!=y)&&(x!=z)&&(z!=y))
        printf("Escaleno\n");
    }
    else
        printf("Nao e um triangulo\n");


return 0;
}

