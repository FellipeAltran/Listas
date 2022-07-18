#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Exercicio 14, Lista 3\n");

    char r[15];
    int n=1;

    do{
        printf("Ola tudo bem?\n");
        scanf("%s", r);

        if (strcmp(r,"Sim")==0){
            printf("Programa Encerrado!\n");
        break;
        }

    }while(n>0);

    return 0;
}
