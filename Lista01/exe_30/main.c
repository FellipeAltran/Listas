#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 30\n");

    float salario;
    float vendas;
    float salarioFinal;

    printf("Digite o salario: \n");
    scanf("%f", &salario);
    printf("Total de vendas: \n");
    scanf("%f", &vendas);

    salarioFinal = salario + (vendas * 0.04);

    printf("O valor da comissao e: %.2f\n", vendas*0.04);
    printf("Salario final: %.2f\n", salarioFinal);


}
