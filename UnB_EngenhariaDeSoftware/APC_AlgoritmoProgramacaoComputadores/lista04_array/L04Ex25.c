/*
L04Ex25 Matriz simétrica
DESCRIÇÃO: Codifique um software que leia os valores de uma matriz quadrada de ordem 9 de inteiros e
imprima ”S”se a mesma é simétrica (isto é, se A[i][j] = A [j][i] para todo 0 ¡= i,j ¡=9) ou ”N”, caso contrário.
ENTRADA: Sequência de 81 inteiros referente a matriz quadrada.
SAÍDA: Caracter S para quando se tratar de matriz simétrica ou N, caso contrário.
*/
#include <stdio.h>

int main(){
    int matriz[9][9];
    int y, x, simetria = 0; //controle

    for(y=0;y<9;y++){
        for(x=0;x<9;x++){
            scanf("%d", &matriz[y][x]);
        }
    }

    for(y=0;y<9;y++){
        for(x=0;x<9;x++){
            if(matriz[y][x] == matriz[x][y])
                simetria++;
        }
    }

    if(simetria == 81)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
