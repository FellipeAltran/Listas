#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 18\n");

    double salarioBruto;
    double horaNormal;
    double horaExtra;
    double salario;

    printf("Quantas horas normais trabalhadas? \n");
    scanf("%lf", &horaNormal);

    printf("Quantas horas extras trabalhadas? \n");
    scanf("%lf", &horaExtra);

    salario = (horaNormal * 10) + (horaExtra * 15);
    salarioBruto = salario + (salario * 0.1);

    printf("Salario bruto e: %.2lf\n", salarioBruto);

    return 0;
}
