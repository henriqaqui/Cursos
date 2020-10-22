/*

*/
#include <stdio.h>

int main(){
    int tabuleiro_A[11][11], tabuleiro_B[11][11], tabuleiro_magico[11][11]={0};
    int y, x, y_magico, diagonal, limite_x, limite_y; //controle

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

    for(diagonal = 0, limite_x = 11, limite_y = 0; diagonal < 6; diagonal++, limite_x--, limite_y++){


        for(y = diagonal, x = diagonal;x < limite_x;x++){
                printf("%d ", tabuleiro_magico[y][x]);
        }
        for(y++, x--;y<limite_x;y++){
                printf("%d ", tabuleiro_magico[y][x]);
        }
        for(y--, x--; x >= limite_y;x--){
                printf("%d ", tabuleiro_magico[y][x]);
        }
        for(y--, x++; y > limite_y;y--){
                printf("%d ", tabuleiro_magico[y][x]);
        }
    }

    printf("\n");

    return 0;
}
