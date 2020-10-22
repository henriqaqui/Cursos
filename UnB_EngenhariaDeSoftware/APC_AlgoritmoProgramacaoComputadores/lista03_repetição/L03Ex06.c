/*
L03Ex06: Soma e media de uma serie.
DESCRIÇÃO: Codifique um software que leia vários números inteiros e positivos, calculando ao final da
sequência a soma e a média desses números. A sequência termina quando o usuário entrar com
um valor negativo (esse valor n˜ao deve fazer parte de nenhum dos calculos).
ENTRADA: Entradas int.
SAÍDA: Uma saída referente a soma dos números inteiros, sucedida de uma quebra de linha e outra
saída contendo a média dos valores fornecidos pelo usuário, sucedida, também, por uma quebra de linha.
*/

#include <stdio.h>
int main(){
    int num, soma = 0;
    double media, repeticao = 0;

    scanf("%d", &num);

    while(num >= 0){
        repeticao++;
        soma += num;
        scanf("%d", &num);
        }
    media = soma / repeticao;
    printf("%d\n%.1lf\n", soma, media);
    return 0;
}
