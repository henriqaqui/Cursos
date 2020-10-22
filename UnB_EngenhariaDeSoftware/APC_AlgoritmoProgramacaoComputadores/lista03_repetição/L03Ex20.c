/*
L03Ex20: Gran Prix I.
DESCRI��O: Escreva um programa que leia os tempos de v�rias voltas em segundos, at� que seja fornecido
o valor 0. Em seguida, apresente o n�mero da volta mais r�pida e o seu tempo em segundos, o
n�mero da volta mais lenta, o seu tempo em segundos e o tempo total da prova em segundos.
Quando for fornecido um valor negativo, o seu software deve adicion�-lo a pr�xima volta, ou seja,
os valores negativos representam penalidades a serem adicionadas a pr�xima volta.
    Pressupostos:
    � N�ao haver� mais de uma penalidade entre voltas, ou seja, uma vez fornecido um valor negativo, o pr�ximo ser� positivo.
    � Sempre que houver uma penalidade, haver� um tempo de uma pr�xima volta.
ENTRADA: A entrada do software consiste de um inteiro referente ao tempo da volta, caso o valor seja
positivo, ou penalidade, caso o valor seja negativo.
SA�DA: A sa�da do software deve conter as mensagens �Melhor volta: NM - TM seg�, onde NM e TM
correspondem respectivamente a n�mero e tempo da melhor volta; �Pior volta: NP - TP seg�, onde
NP e TP correspondem respectivamente a numero e tempo da pior volta; e �Tempo total: TT seg�,
onde TT corresponde ao tempo total da prova. Ao final de cada mensagem dever� ser impressa
uma quebra de linha. Se atente para os espa�os entre as palavras da frase. N�ao h� espa�o entre a palavra e dois pontos.
*/

#include <stdio.h>

int main(){

    int  tempo_volta, tempo_menor, tempo_maior, tempo_total;
    int volta = 1, volta_maior = 1, volta_menor = 1, penalidade = 0;

    scanf("%d", &tempo_volta);

    tempo_maior = tempo_volta;
    tempo_menor = tempo_volta;
    tempo_total = tempo_volta;

    scanf("%d", &tempo_volta);

    while (tempo_volta != 0){
        if (tempo_volta < 0){
            penalidade = tempo_volta * (-1);
            scanf("%d", &tempo_volta);
        }
        volta++;
        tempo_volta += penalidade;
        penalidade = 0;
            if (tempo_volta > tempo_maior){
                tempo_maior = tempo_volta;
                volta_maior = volta;
            } else if (tempo_volta < tempo_menor) {
                tempo_menor = tempo_volta;
                volta_menor = volta;
            }
        tempo_total += tempo_volta;

        scanf("%d", &tempo_volta);
    }

    printf("Melhor volta: %d - %d seg\nPior volta: %d - %d seg\nTempo total: %d seg\n", volta_menor, tempo_menor, volta_maior, tempo_maior, tempo_total);
    return 0;
}
