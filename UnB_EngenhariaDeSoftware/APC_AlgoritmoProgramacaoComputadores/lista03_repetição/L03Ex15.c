/*
L03Ex15: Area dos C�modos.
DESCRI��O: Codifique um software que apresente a �rea total de uma casa a partir do n�mero de c�modos
que ela possui e a largura e comprimento de cada c�modo em cent�metros. Considere que todos os
c�modos possuem formato retangular. C�modo = Largura x Comprimento.
ENTRADA: Uma entrada N tipo int referente ao n�mero de comodos. Uma s�rie de N pares, ambas
entradas do tipo int, referente a Largura e Comprimento respectivamente.
SA�DA: Uma sa�da ponto int representando a �rea total da casa, sucedida quebra de linha.
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
