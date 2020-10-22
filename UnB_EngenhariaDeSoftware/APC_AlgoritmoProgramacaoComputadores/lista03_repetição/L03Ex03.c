/*
L03Ex03: S�rie.
DESCRI��O: Codifique um software que apresente o valor de H, sendo H calculado por: H =1+2+3+4+...+N.
O valor de N ser� fornecido pelo usu�rio.
ENTRADA: Uma entrada int.
SA�DA: Uma sa�da int, sucedida quebra de linha.
*/

#include <stdio.h>
int main(){
    int N, H = 0, repeticao = 0 ; // "repeticao" conta quantas vezes while vai repetir

    scanf("%d", &N);

    while(repeticao < N){
        repeticao++;
        H += repeticao;
        }
    printf("%d\n", H);
    return 0;
}
