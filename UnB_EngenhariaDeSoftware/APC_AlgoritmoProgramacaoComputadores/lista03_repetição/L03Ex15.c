/*
L03Ex15: Area dos Cômodos.
DESCRIÇÃO: Codifique um software que apresente a área total de uma casa a partir do número de cômodos
que ela possui e a largura e comprimento de cada cômodo em centímetros. Considere que todos os
cômodos possuem formato retangular. Cômodo = Largura x Comprimento.
ENTRADA: Uma entrada N tipo int referente ao número de comodos. Uma série de N pares, ambas
entradas do tipo int, referente a Largura e Comprimento respectivamente.
SAÍDA: Uma saída ponto int representando a área total da casa, sucedida quebra de linha.
*/

#include <stdio.h>

int main(){
    int  area_total, area_comodo, quantidade_comodo, largura_comodo, comprimento_comodo;

    scanf("%d", &quantidade_comodo);

    for(area_total = 0; quantidade_comodo > 0; quantidade_comodo--){
                scanf("%d", &largura_comodo);
                scanf("%d", &comprimento_comodo);

                area_comodo = largura_comodo * comprimento_comodo;
                area_total += area_comodo;
    }
    printf("%d\n", area_total);
    return 0;
}
