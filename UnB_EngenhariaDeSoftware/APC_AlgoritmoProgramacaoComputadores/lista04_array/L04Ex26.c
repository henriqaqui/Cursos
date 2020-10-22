/*
L04Ex26 Linha da Matriz com Maior Soma dos Elementos
DESCRIÇÃO: Codifique um software que leia os valores de uma matriz B (10x5) de inteiros e imprima a linha
de B que possua a maior soma de seus elementos.
ENTRADA: Uma sequência de 50 inteiros referente a matriz B.
SAÍDA: O valor da linha, cuja soma dos elementos seja a maior.
*/
#include <stdio.h>

int main(){
    int matriz[10][5], soma_y[10] = {0}, maior_y, valor_maior_y;
    int y, x; //controle

    for(y=0;y<10;y++){
        for(x=0;x<5;x++){
            scanf("%d", &matriz[y][x]);
            soma_y[y] += matriz[y][x];
        }
    }

    for(y = 1, maior_y = 0, valor_maior_y = soma_y[0]; y < 10; y++){
        if(soma_y[y] > valor_maior_y){
            maior_y = y;
            valor_maior_y = soma_y[y];
        }
    }

   printf("%d\n", maior_y);

    return 0;
}
