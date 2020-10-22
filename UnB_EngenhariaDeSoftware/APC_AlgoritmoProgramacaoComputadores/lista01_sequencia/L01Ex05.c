/*
L01Ex05: Salário final.
DESCRIÇÃO: Codifique um software que receba o salário-base de um funcionário, calcule e mostre o salário a receber,
sabendo que esse funcionário tem gratificacão de 5% e paga imposto de 7%, ambos sobre o salário-base.
ENTRADA: Uma entrada do tipo double referente ao salário.
SAÍDA: Uma saída do tipo double com duas casas decimais, sucedida de quebra de linha.
*/

#include <stdio.h>

int main(){
    double salario_base, gratificacao, imposto, salario_novo;

    scanf("%lf", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_novo = salario_base + gratificacao - imposto;

    printf("%.2lf\n", salario_novo);
    return 0;
}
