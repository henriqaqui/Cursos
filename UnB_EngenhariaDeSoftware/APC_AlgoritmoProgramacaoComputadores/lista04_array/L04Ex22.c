/*
L04Ex22 Soma dos elementos da diagonal
DESCRI��O: Seja A uma matriz quadrada de n�meros inteiros de ordem 7. Fa�a um programa que leia os
valores de A e imprima a soma dos elementos de sua diagonal principal.
ENTRADA: Uma sequ�ncia de 49 inteiros.
SA�DA: Um valor inteiros referente a soma dos elementos da diagonal principal da matriz lida.
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
