#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 37\n");

    int n;
    int r1, r2, r3, r4, r5, r6, r7, r8 ,r9, r10;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    r1 = n * 1;
    r2 = n * 2;
    r3 = n * 3;
    r4 = n * 4;
    r5 = n * 5;
    r6 = n * 6;
    r7 = n * 7;
    r8 = n * 8;
    r9 = n * 9;
    r10 = n * 10;

    printf("%d * 1: %d\n", n, r1);
    printf("%d * 2: %d\n", n, r2);
    printf("%d * 3: %d\n", n, r3);
    printf("%d * 4: %d\n", n, r4);
    printf("%d * 5: %d\n", n, r5);
    printf("%d * 6: %d\n", n, r6);
    printf("%d * 7: %d\n", n, r7);
    printf("%d * 8: %d\n", n, r8);
    printf("%d * 9: %d\n", n, r9);
    printf("%d * 10: %d\n", n, r10);

    return 0;
}
