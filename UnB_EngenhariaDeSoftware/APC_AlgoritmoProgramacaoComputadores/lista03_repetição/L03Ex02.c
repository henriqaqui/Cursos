/*
L03Ex02: RH
DESCRIÇÃO: Codifique um software que leia a quantidade NH de horas trabalhadas por dia de um funcionário,
ao longo de 30 dias, e apresente o valor total de horas trabalhadas no período.
ENTRADA: Entradas do tipo int com os valores de horas trabalhadas por dia do funcionário.
SAÍDA: Uma saída int que contenha a quantidade total de horas trabalhadas pelo funcionário.
*/

#include <stdio.h>
int main(){

    int hora_dia, hora_total = 0, dia;
    for (dia = 1; dia < 31; dia++){
        scanf("%d", &hora_dia);
        hora_total += hora_dia;
    }
    printf("%d", hora_total);
    return 0;
}
