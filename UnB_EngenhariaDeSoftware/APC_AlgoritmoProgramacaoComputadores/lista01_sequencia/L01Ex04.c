/*
L01Ex04: Aumento de salário com percentual.
DESCRIÇÃO: Codifique um software que receba o valor do salário de um funcionário e o percentual de aumento.
Logo em seguida, calcule e mostre o valor do aumento e o salário acrescido do percentual fornecido.
ENTRADA: Uma entrada do tipo double referente ao salário e outra referente ao percentual de aumento.
SAÍDA: Duas saídas do tipo double com duas casas decimais, sendo a primeira referente ao valor do aumento
e a segunda referente ao valor final do salario após o aumento.
*/

#include <stdio.h>

int main() {
    double salario, aumentoPercentual, aumentoValor;

    scanf("%lf", &salario);
    scanf("%lf", &aumentoPercentual);

    aumentoValor = salario * (aumentoPercentual/100);
    salario += aumentoValor;

    printf("%.2f\n%.2f\n", aumentoValor, salario);
    return 0;
}
