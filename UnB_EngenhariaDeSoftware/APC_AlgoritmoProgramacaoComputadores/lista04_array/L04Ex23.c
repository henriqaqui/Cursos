/*
L04Ex23 Soma de matrizes
DESCRIÇÃO: Seja A e B duas matrizes 4x5 de inteiros. Faça um programa que leia os valores de A e depois
os de B e imprima a soma da matriz A com a matriz B.
ENTRADA: Sequência de 40 inteiros referente aos valores das duas matrizes.
SAÍDA: Sequência de 20 inteiros referente a matriz resultante da soma de A e B.
*/
#include <stdio.h>

int main(){
    int A[4][5], B[4][5], soma_AB[4][5];
    int y, x; //controle

    for(y=0;y<4;y++){
        for(x=0;x<5;x++){
            scanf("%d", &A[y][x]);
        }
    }

    for(y=0;y<4;y++){
        for(x=0;x<5;x++){
            scanf("%d", &B[y][x]);
            soma_AB[y][x] = A[y][x] + B[y][x];
        }
    }

    for(y=0; y<4;y++){
        for(x=0;x<5;x++){
            printf("%d ", soma_AB[y][x]);
        }
        printf("\n");
    }
    return 0;
}
