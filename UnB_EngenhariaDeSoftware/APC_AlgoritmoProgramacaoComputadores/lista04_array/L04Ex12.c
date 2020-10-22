/*
L04Ex12: Operações com conjuntos.
DESCRIÇÃO: Codifique um software que leia 10 valores inteiros e os armazene no array X e leia 10 valores
inteiros e os armazene em Y. Calcule e mostre os seguintes arrays resultantes:
    - a uni˜ao de X e Y (todos os elementos de X e de Y sem repetiç˜oes);
    - a diferença de X e Y (todos os elementos de X que n˜ao existam em Y, sem repetições);
    - a interseç˜ao de X e Y (apenas os elementos que aparecem nos dois vetores, sem repetições).
ENTRADA: Uma sequência de 20 números do tipo int.
SAÍDA: A sequência dos números resultantes da uni˜ao, diferença e interseção. Os números separados
por espaço em branco e as sequências por quebra de linha.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int numero[20][2] = {{0},{0}},linha, linha_contagem;

    for(linha = 0; linha < 20; linha++){
        scanf("%d", &numero[linha][0]);
    }

    //todos os elementos de X e de Y sem repetiç˜oes
    printf("%d ", numero[0][0]);

    for(linha = 1; linha < 20; linha++){
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

    //todos os elementos de X que n˜ao existam em Y, sem repetições
    for(linha = 0; linha < 10; linha++){
        if(numero[linha][1] == 0){ // coloquei por último para aproveirar as marcações de repetição do X
            for(linha_contagem = 10, numero[linha][1] = 0; linha_contagem < 20; linha_contagem++){
                if(numero[linha][0] == numero[linha_contagem][0]){
                    numero[linha][1] = 1;
                    break;
                }
            }
            if(numero[linha][1] == 0)
                printf("%d ", numero[linha][0]);
        }
    }
    printf("\n");

    //apenas os elementos que aparecem nos dois vetores, sem repetições
    for(linha = 0; linha < 10; linha++){
        for(linha_contagem = 10, numero[linha][1] = 0; linha_contagem < 20; linha_contagem++){
            if(numero[linha][0] == numero[linha_contagem][0]){
                numero[linha][1] = 1;
                break;
            }
        }
        if(numero[linha][1] == 1)
            printf("%d ", numero[linha][0]);
    }
    printf("\n");
    return 0;
}
