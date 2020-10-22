/*
L01Ex02: Média de três notas.
DESCRIÇÃO: Codifique um software que receba três notas, calcule e mostre a média delas.
ENTRADA: Três entradas do tipo inteiro.
SAÍDA: Uma saída do tipo double com uma casa decimal, sucedida de quebra de linha.
*/

#include <stdio.h>

int main(){
    int nota_1, nota_2, nota_3;
    double media;

    scanf("%d", &nota_1);
    scanf("%d", &nota_2);
    scanf("%d", &nota_3);

    media = (nota_1 + nota_2 + nota_3)/ (double)3;

    printf("%.1lf\n", media);
    return 0;
}
