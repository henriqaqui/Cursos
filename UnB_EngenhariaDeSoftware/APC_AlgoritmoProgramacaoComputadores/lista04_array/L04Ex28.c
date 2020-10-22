/*
L04Ex28 Troca das diagonais da matriz
Codifique um software que leia os valores de uma matriz quadrada de ordem 9 de inteiros
e troque os valores da diagonal principal com a diagonal secundária, imprimindo em seguida a
matriz alterada.
ENTRADA: Uma sequência de 81 números do tipo int. A leitura deve seguir a sequencia linha para colula.
Ou seja, ser˜ao lidos todas as colunas da 1a linha, depois para a 2a linha e por ai em diante.
SAÍDA: Impress˜ao da matriz com os elementos das diagonais primaria e secundária trocados. Cada
elemento deve ser sucedido de espaço em branco e cada linha deve ser sucedida de uma quebra de linha.
*/
#include <stdio.h>

int main(){
    int matriz[9][9], diagonal_principal[9];
    int y, x, diagonal; //controle

    for(y=0;y<9;y++){
        for(x=0;x<9;x++){
            scanf("%d", &matriz[y][x]);
            if(y == x)
                diagonal_principal[y] = matriz[y][x];
        }
    }

    for(y = 8, diagonal = 0; y >= 0; y--, diagonal++){
        for(x = 0; x < 9; x++){
            if(x == diagonal){
                matriz[diagonal][x] = matriz[y][x];
                matriz[y][x] = diagonal_principal[diagonal];
                break;
            }
        }
    }

    for(y=0;y<9;y++){
        for(x=0;x<9;x++){
            printf("%d ", matriz[y][x]);
        }
        printf("\n");
    }

    return 0;
}
