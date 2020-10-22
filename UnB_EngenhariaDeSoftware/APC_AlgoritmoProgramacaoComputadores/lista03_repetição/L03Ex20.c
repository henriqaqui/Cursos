/*
L03Ex20: Gran Prix I.
DESCRIÇÃO: Escreva um programa que leia os tempos de várias voltas em segundos, até que seja fornecido
o valor 0. Em seguida, apresente o número da volta mais rápida e o seu tempo em segundos, o
número da volta mais lenta, o seu tempo em segundos e o tempo total da prova em segundos.
Quando for fornecido um valor negativo, o seu software deve adicioná-lo a próxima volta, ou seja,
os valores negativos representam penalidades a serem adicionadas a próxima volta.
    Pressupostos:
    • N˜ao haverá mais de uma penalidade entre voltas, ou seja, uma vez fornecido um valor negativo, o próximo será positivo.
    • Sempre que houver uma penalidade, haverá um tempo de uma próxima volta.
ENTRADA: A entrada do software consiste de um inteiro referente ao tempo da volta, caso o valor seja
positivo, ou penalidade, caso o valor seja negativo.
SAÍDA: A saída do software deve conter as mensagens ”Melhor volta: NM - TM seg”, onde NM e TM
correspondem respectivamente a número e tempo da melhor volta; ”Pior volta: NP - TP seg”, onde
NP e TP correspondem respectivamente a numero e tempo da pior volta; e ”Tempo total: TT seg”,
onde TT corresponde ao tempo total da prova. Ao final de cada mensagem deverá ser impressa
uma quebra de linha. Se atente para os espaços entre as palavras da frase. N˜ao há espaço entre a palavra e dois pontos.
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
