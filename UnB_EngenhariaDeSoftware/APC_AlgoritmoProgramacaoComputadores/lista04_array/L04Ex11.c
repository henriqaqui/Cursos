/*
L04Ex11: Primeira Ocorr�ncia de N�mero Lido.
DESCRI��O: Codifique um software que leia 500 n�meros inteiros e imprima a primeira ocorr�ncia de cada um.
ENTRADA: Sequ�ncia de 500 n�meros int.
SA�DA: Valores int sucedidos de espa�o. O �ltimo valor deve ser sucedido de quebra de linha.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int numero[500][2] = {{0},{0}}, linha, linha_contagem;

    for(linha = 0; linha < 500; linha++){
        scanf("%d", &numero[linha][0]);
    }

    printf("%d ", numero[0][0]);

    for(linha = 1; linha < 500; linha++){
        for(linha_contagem = 0; linha_contagem < linha; linha_contagem++){
            if(numero[linha][0] == numero[linha_contagem][0]){
                numero[linha][1] = 1;
                break;
            }
        }
        if(numero[linha][1] == 0)
            printf("%d ", numero[linha][0]);
    }
    printf("\n");
    return 0;
}
