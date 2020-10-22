/*
L04Ex24 Matriz transposta
DSCRI��O: Escreva um c�digo que leia os valores de uma matriz A (7x9) de inteiros e mostre na tela sua transposta.
ENTRADA: Sequ�ncia de 63 inteiros, referente a matriz A.
SA�DA: Sequ�ncia de 63 inteiros, referente a matriz transposta de A.
*/
#include <stdio.h>

int main(){
    int A[7][9];
    int y, x; //controle

    for(y=0;y<7;y++){
        for(x=0;x<9;x++){
            scanf("%d", &A[y][x]);
        }
    }

    for(x=0; x<9;x++){
        for(y=0;y<7;y++){
            printf("%d ", A[y][x]);
        }
        printf("\n");
    }
    return 0;
}
