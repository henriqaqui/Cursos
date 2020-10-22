/*
L04Ex21: Localizac�ao do maior valor da matriz
DESCRI��O: Seja R uma matriz 4x5 de n�meros inteiros. Fa�a um programa que leia os valores de R e
imprima seu maior elemento e a sua posi��o.
ENTRADA: Uma sequ�ncia de 20 n�meros inteiros.
SA�DA: Tr�s inteiros, sendo o primeiro referente ao valor do maior n�mero, o segundo referente a linha
em que o n�mero se encontra na matriz e o terceiro, a sua coluna.
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
