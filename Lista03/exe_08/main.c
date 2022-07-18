#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Exercicio 8, Lista 3\n");

    char nome1[15], nome2[15];
    int n1=400000, n2;

    for (int i=1;i<=10;i++){

        printf("Digite seu nome: \n");
        scanf("%s", nome2);

        printf("Digite sua idade: \n");
        scanf("%d", &n2);

            if (n2<n1){
                n1 = n2;
                strcpy(nome1, nome2);
            }
    }
    printf("A pessoa com menor idade e: %s\n", nome1);

    return 0;
}
