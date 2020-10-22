/*
L04Ex27 Subtra��o de elementos de matriz
DESCRI��O: Seja A uma matriz de inteiros 15x5. Fa�a um programa que leia os valores de A e subtraia cada
elemento da matriz A pelo menor elemento da linha correspondente. Imprima este resultado.
    DICA: para que a sa�da sempre apare�a com dois d�gitos, com zero a esquerda, use a diretiva %02d.
ENTRADA: Uma sequ�ncia de 15x5 n�meros do tipo int.
SA�DA: Uma sequ�ncia de 15x5 n�meros subtra�dos do menor elemento da respectiva linha. Cada
elemento deve ser sucedido de espa�o em branco e cada linha deve ser sucedida de uma quebra de linha.
*/
#include <stdio.h>

int main(){
    int matriz[15][5], menor_valor, menor_x;
    int y, x; //controle

    for(y=0;y<15;y++){
        for(x=0;x<5;x++){
            scanf("%d", &matriz[y][x]);
        }
    }

    for(y = 0; y < 15; y++){
        for(x = 1, menor_x = 0, menor_valor = matriz[y][0]; x < 5; x++){
            if(matriz[y][x] < menor_valor){
                menor_valor = matriz[y][x];
                menor_x = x;
            }
        }
        for(x = 0; x < 5; x++){
            printf("%02d ", matriz[y][x] - menor_valor);
        }
        printf("\n");
    }

    return 0;
}
