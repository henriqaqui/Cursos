/*
L01Ex03: Aumento de salário.
DESCRIÇÃO: Codifique um software que receba o valor do salário de um funcionário, calcule e mostre o novo salário acrescido de 25%.
ENTRADA: Uma entrada do tipo double.
SAÍDA: Uma saída do tipo double com duas casas decimais, sucedida de quebra de linha.
*/

#include <stdio.h>

int main(){
    double salario;

    scanf("%lf", &salario);

    salario += salario * 0.25;

    printf("%.2lf\n", salario);
    return 0;
}
