/*
L04Ex21: Localizac˜ao do maior valor da matriz
DESCRIÇÃO: Seja R uma matriz 4x5 de números inteiros. Faça um programa que leia os valores de R e
imprima seu maior elemento e a sua posiçâo.
ENTRADA: Uma sequência de 20 números inteiros.
SAÍDA: Três inteiros, sendo o primeiro referente ao valor do maior número, o segundo referente a linha
em que o número se encontra na matriz e o terceiro, a sua coluna.
*/
#include <stdio.h>

int main(){
    int numero[4][5], y, x;
    int numero_maior, y_maior, x_maior;

    for(y = 0; y < 4; y++){
        for(x = 0; x < 5; x++){
            scanf("%d", &numero[y][x]);
        }
    }

    numero_maior = numero[0][0];
    y_maior = 0;
    x_maior = 0;

    for(y = 0; y < 4; y++){
        for(x = 0; x < 5; x++){
            if(numero[y][x] > numero_maior){
                numero_maior = numero[y][x];
                y_maior = y;
                x_maior = x;
            }
        }
    }

    printf("%d %d %d\n", numero_maior, y_maior, x_maior);

    return 0;
}
