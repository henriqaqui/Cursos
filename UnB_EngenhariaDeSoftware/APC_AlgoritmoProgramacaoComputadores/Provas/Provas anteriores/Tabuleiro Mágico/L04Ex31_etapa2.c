/*

*/
#include <stdio.h>

int main(){
    int tabuleiro_A[11][11], tabuleiro_B[11][11], tabuleiro_magico[11][11]={0};
    int y, x, y_magico; //controle

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

    for(y_magico=0;y_magico<11;y_magico++){
        for(y=0;y<11;y++){
            for(x=0;x<11;x++){
                tabuleiro_magico[y_magico][x] += tabuleiro_A[y_magico][y] * tabuleiro_B[y][x];
            }
        }
    }

    printf("\n");

    for(y=0;y<11;y++){
        for(x=0;x<11;x++){
            printf("%d ", tabuleiro_magico[y][x]);
        }
        printf("\n");
    }

    return 0;
}
