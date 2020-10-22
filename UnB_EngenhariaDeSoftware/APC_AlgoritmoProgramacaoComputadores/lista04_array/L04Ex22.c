/*
L04Ex22 Soma dos elementos da diagonal
DESCRIÇÃO: Seja A uma matriz quadrada de números inteiros de ordem 7. Faça um programa que leia os
valores de A e imprima a soma dos elementos de sua diagonal principal.
ENTRADA: Uma sequência de 49 inteiros.
SAÍDA: Um valor inteiros referente a soma dos elementos da diagonal principal da matriz lida.
*/
#include <stdio.h>

int main(){
    int A[7][7], soma_diagonal_A = 0;
    int y, x; //controle

    for(y = 0;y < 7; y++){
        for(x = 0; x < 7; x++){
            scanf("%d", &A[y][x]);
            if(y==x)
                soma_diagonal_A += A[y][x];
        }
    }

    printf("%d\n", soma_diagonal_A);
    return 0;
}
