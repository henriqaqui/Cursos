/*

*/
#include <stdio.h>

int main(){
    int tabuleiro_A[11][11], tabuleiro_B[11][11];
    int y, x; //controle

    for(y=0;y<11;y++){
        for(x=0;x<11;x++){
            scanf("%d", &tabuleiro_A[y][x]);
        }
    }

    for(y=0;y<11;y++){
        for(x=0;x<11;x++){
            scanf("%d", &tabuleiro_B[y][x]);
        }
    }

    printf("\n");

    for(y=0;y<11;y++){
        for(x=0;x<11;x++){
            printf("%d ", tabuleiro_A[y][x]);
        }
        printf("\n");
    }

    printf("\n");

    for(y=0;y<11;y++){
        for(x=0;x<11;x++){
            printf("%d ", tabuleiro_B[y][x]);
        }
        printf("\n");
    }

    return 0;
}
