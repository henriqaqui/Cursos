/*
L04Ex29 Soma dos elementos
DESCRIÇÃO: Codifique um software que leia os valores de uma matriz quadrada de ordem 10 de inteiros e
calcule e escreva a soma dos elementos que est˜ao na área marcada com ‘*’:
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *
ENTRADA: Sequência de 100 inteiros referente a matriz.
SAÍDA: Inteiro referente a soma dos elementos abaixo da diagonal principal.
*/
#include <stdio.h>

int main(){
    int matriz[10][10], soma = 0;
    int y, x; //controle

    for(y=0;y<10;y++){
        for(x=0;x<10;x++){
            scanf("%d", &matriz[y][x]);
            if(x <= y)
                soma += matriz[y][x];
        }
    }

    printf("%d\n", soma);

    return 0;
}
