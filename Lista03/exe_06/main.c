#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 6, Lista 03\n");

    int n;
    int Midade=0;

    for (int i=1;i<=20;i++){
    printf("Digite uma idade: \n");
    scanf("%d", &n);
    Midade = Midade + n;
    }

    Midade = Midade/20;

    printf("%d\n", Midade);

    return 0;
}
