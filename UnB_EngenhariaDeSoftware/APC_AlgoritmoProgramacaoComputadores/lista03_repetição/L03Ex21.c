/*
L03Ex21: Stockcar II.
DESCRI��O: A equipe do piloto Caca Bueno necessita monitorar o seu desempenho nas corridas, informando
tempo total TT, melhor volta MV e pior volta PV. Para isso, � necess�rio o registro dos tempos de
suas voltas em segundos, al�m das penaliza�oes que, por ventura, ele vier a sofrer. Para auxiliar a
equipe, voc� deve codificar um software que fa�a a leitura desses tempos ou penalidades e informe
o tempo total TT, melhor volta MV e pior volta PV. Para isso, o software deve ler o n�mero de
voltas da prova NTV. Esse n�mero determinar� quantas leituras, al�m das penaliza�oes, o software
far�. A tabela a seguir discrimina as penaliza�oes de acordo com a entrada fornecida pelo usu�rio.
    Entrada Penaliza��o(s):
        -1 10
        -2 25
        -3 40
    Pressupostos:
        � N�ao haver� mais de uma penalidade entre voltas, ou seja, uma vez fornecido um valor negativo, o pr�ximo ser� positivo.
        � Sempre que houver uma penalidade, haver� um tempo de uma pr�xima volta.
        � Para o menor e maior tempo de volta, sempre vale e primeira ocorr�ncia.
ENTRADA: A entrada do software consiste de um inteiro que informar� a quantidade de voltas NTV e de
outros inteiros TV referente ao tempo da volta , caso o valor seja positivo, ou penalidade, caso o valor seja negativo.
SA�DA: A sa�da do software deve conter as mensagens �Melhor volta: NM - TM seg�, onde NM e TM
correspondem respectivamente a n�mero e tempo da melhor volta; �Pior volta: NP - TP seg�, onde
NP e TP correspondem respectivamente a numero e tempo da pior volta; e �Tempo total: TT seg�,
onde TT corresponde ao tempo total da prova. Ao final de cada mensagem dever� ser impressa
uma quebra de linha. Se atente para os espac�os entre as palavras da frase. N�ao h� espa�o entre a palavra e dois pontos.
*/

#include <stdio.h>

int main(){

    int  tempo_total = 0, tempo_melhor, tempo_pior, tempo_volta;
    int volta_quantidade, volta = 1, volta_melhor, volta_pior, penalidade = 0;

    scanf("%d", &volta_quantidade);

    for (volta_melhor = 1, volta_pior = 1; volta_quantidade > 0; volta++, volta_quantidade--){
        scanf("%d", &tempo_volta);
            if (tempo_volta < 0){
                switch (tempo_volta){
                    case -1:
                        penalidade = 10;
                        break;
                    case -2:
                        penalidade = 25;
                        break;
                    case -3:
                        penalidade = 40;
                        break;
                }
                scanf("%d", &tempo_volta);
            }
            if (tempo_total == 0){
                tempo_melhor = tempo_volta;
                tempo_pior = tempo_volta;
            }

            tempo_volta += penalidade;
            tempo_total += tempo_volta;

            if (tempo_volta > tempo_pior){
                tempo_pior = tempo_volta;
                volta_pior = volta;
            } else if (tempo_volta < tempo_melhor){
                tempo_melhor = tempo_volta;
                volta_melhor = volta;
            }
            penalidade = 0;
    }

    printf("Melhor volta: %d - %d seg\nPior volta: %d - %d seg\nTempo total: %d seg\n", volta_melhor, tempo_melhor, volta_pior, tempo_pior, tempo_total);
    return 0;
}
