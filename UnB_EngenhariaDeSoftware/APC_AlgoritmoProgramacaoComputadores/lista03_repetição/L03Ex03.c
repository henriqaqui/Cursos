/*
L03Ex03: Série.
DESCRIÇÃO: Codifique um software que apresente o valor de H, sendo H calculado por: H =1+2+3+4+...+N.
O valor de N será fornecido pelo usuário.
ENTRADA: Uma entrada int.
SAÍDA: Uma saída int, sucedida quebra de linha.
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
