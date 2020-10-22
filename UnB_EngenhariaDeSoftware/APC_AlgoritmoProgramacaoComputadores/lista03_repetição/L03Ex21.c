/*
L03Ex21: Stockcar II.
DESCRIÇÃO: A equipe do piloto Caca Bueno necessita monitorar o seu desempenho nas corridas, informando
tempo total TT, melhor volta MV e pior volta PV. Para isso, é necessário o registro dos tempos de
suas voltas em segundos, além das penalizaçoes que, por ventura, ele vier a sofrer. Para auxiliar a
equipe, você deve codificar um software que faça a leitura desses tempos ou penalidades e informe
o tempo total TT, melhor volta MV e pior volta PV. Para isso, o software deve ler o número de
voltas da prova NTV. Esse número determinará quantas leituras, além das penalizaçoes, o software
fará. A tabela a seguir discrimina as penalizaç˜oes de acordo com a entrada fornecida pelo usuário.
    Entrada Penalização(s):
        -1 10
        -2 25
        -3 40
    Pressupostos:
        • N˜ao haverá mais de uma penalidade entre voltas, ou seja, uma vez fornecido um valor negativo, o próximo será positivo.
        • Sempre que houver uma penalidade, haverá um tempo de uma próxima volta.
        • Para o menor e maior tempo de volta, sempre vale e primeira ocorrência.
ENTRADA: A entrada do software consiste de um inteiro que informará a quantidade de voltas NTV e de
outros inteiros TV referente ao tempo da volta , caso o valor seja positivo, ou penalidade, caso o valor seja negativo.
SAÍDA: A saída do software deve conter as mensagens ”Melhor volta: NM - TM seg”, onde NM e TM
correspondem respectivamente a número e tempo da melhor volta; ”Pior volta: NP - TP seg”, onde
NP e TP correspondem respectivamente a numero e tempo da pior volta; e ”Tempo total: TT seg”,
onde TT corresponde ao tempo total da prova. Ao final de cada mensagem deverá ser impressa
uma quebra de linha. Se atente para os espac¸os entre as palavras da frase. N˜ao há espaço entre a palavra e dois pontos.
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
