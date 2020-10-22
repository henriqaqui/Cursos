/*
L03Ex06: Soma e media de uma serie.
DESCRI��O: Codifique um software que leia v�rios n�meros inteiros e positivos, calculando ao final da
sequ�ncia a soma e a m�dia desses n�meros. A sequ�ncia termina quando o usu�rio entrar com
um valor negativo (esse valor n�ao deve fazer parte de nenhum dos calculos).
ENTRADA: Entradas int.
SA�DA: Uma sa�da referente a soma dos n�meros inteiros, sucedida de uma quebra de linha e outra
sa�da contendo a m�dia dos valores fornecidos pelo usu�rio, sucedida, tamb�m, por uma quebra de linha.
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
