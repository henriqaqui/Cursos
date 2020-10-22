/*
L04Ex12: Opera��es com conjuntos.
DESCRI��O: Codifique um software que leia 10 valores inteiros e os armazene no array X e leia 10 valores
inteiros e os armazene em Y. Calcule e mostre os seguintes arrays resultantes:
    - a uni�ao de X e Y (todos os elementos de X e de Y sem repeti�oes);
    - a diferen�a de X e Y (todos os elementos de X que n�ao existam em Y, sem repeti��es);
    - a interse�ao de X e Y (apenas os elementos que aparecem nos dois vetores, sem repeti��es).
ENTRADA: Uma sequ�ncia de 20 n�meros do tipo int.
SA�DA: A sequ�ncia dos n�meros resultantes da uni�ao, diferen�a e interse��o. Os n�meros separados
por espa�o em branco e as sequ�ncias por quebra de linha.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int numero[20][2] = {{0},{0}},linha, linha_contagem;

    for(linha = 0; linha < 20; linha++){
        scanf("%d", &numero[linha][0]);
    }

    //todos os elementos de X e de Y sem repeti�oes
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

    //todos os elementos de X que n�ao existam em Y, sem repeti��es
    for(linha = 0; linha < 10; linha++){
        if(numero[linha][1] == 0){ // coloquei por �ltimo para aproveirar as marca��es de repeti��o do X
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

    //apenas os elementos que aparecem nos dois vetores, sem repeti��es
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
