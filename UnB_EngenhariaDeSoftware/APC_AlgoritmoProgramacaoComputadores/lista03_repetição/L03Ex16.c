/*
L03Ex16: Pesquisa de Opiniao�.
DESCRI��O: Em um cinema, certo dia, cada espectador respondeu a um question�rio que perguntava a sua
idade ID e a opini�ao em rela��o ao filme OP, seguindo os seguintes crit�rios:
    1 - �timo
    2 - Bom
    3 - Regular
    4 - Ruim
    5 - P�ssimo
Codifique um software que fa�a a leitura dos dados ID e OP da pesquisa de opini�ao, apresentando ao final:
    � Quantidade de pessoas que responderam a pesquisa - QP.
    � M�dia de idade das pessoas que responderam a pesquisa - MI.
    � Porcentagem de cada uma das respostas - P1, P2, P3, P4, P5.
A pesquisa ser� encerrada quando a idade ID fornecida for negativa. Caso seja fornecido OP
diferente das op�oes apresentadas, o software deve fazer a leitura novamente deste dado.
ENTRADA: Sequ�ncia de dois valores inteiros.
SA�DA: O texto literal �qtde de participantes:�, sucedido espa�o em branco, do valor de QP e de quebra
de linha. Al�m disso, deve apresentar o texto literal �idade media dos participantes:�, sucedido de
espa�o em branco, do valor de MI e de quebra de linha. Por fim, deve apresentar os percentuais
de cada opini�ao como ponto flutuante, com uma casa decimal. O texto literal �Otimo:�, sucedido
de espa�o em branco, do valor P1, % e de quebra de linha deve ser apresentado. O texto literal
�Bom:�, sucedido de espa�o em branco, do valor P2, % e de quebra de linha deve ser apresentado.
O texto literal �Regular:�, sucedido de espa�o em branco, do valor P3, % e de quebra de linha
deve ser apresentado. O texto literal �Ruim:�, sucedido de espa�o em branco, do valor P4, % e de
quebra de linha deve ser apresentado. O texto literal �Pessimo:�, sucedido de espa�o em branco,
do valor P5, % e de quebra de linha deve ser apresentado.
*/

#include <stdio.h>

int main(){

    int  idade,  opiniao;
    double percentual_otimo = 0, percentual_bom = 0, percentual_regular = 0, percentual_ruim = 0, percentual_pessimo = 0;
    double opiniao_otimo = 0, opiniao_bom = 0, opiniao_regular = 0, opiniao_ruim = 0, opiniao_pessimo = 0;
    double idade_total = 0, idade_media = 0, quantidade = 0;

    scanf("%d", &idade);

    if (idade >= 0){
        do {
                do{
                    scanf("%d", &opiniao);
                } while (opiniao < 1 || opiniao > 5);
        quantidade++;
        idade_total += idade;

            switch (opiniao){
                case 1:
                    opiniao_otimo++;
                    break;
                case 2:
                    opiniao_bom++;
                    break;
                case 3:
                    opiniao_regular++;
                    break;
                case 4:
                    opiniao_ruim++;
                    break;
                case 5:
                    opiniao_pessimo++;
                    break;
            }
        scanf("%d", &idade);
        } while (idade >= 0);

        idade_media = idade_total / quantidade;
        percentual_otimo = (opiniao_otimo * 100) / quantidade;
        percentual_bom = (opiniao_bom * 100) / quantidade;
        percentual_regular = (opiniao_regular * 100) / quantidade;
        percentual_ruim = (opiniao_ruim * 100) / quantidade;
        percentual_pessimo = (opiniao_pessimo * 100) / quantidade;
    }

    printf("qtde de participantes: %.0lf\n", quantidade);
    printf("idade media dos participantes: %.1lf\n", idade_media);
    printf("Otimo: %.1lf%%\n", percentual_otimo);
    printf("Bom: %.1lf%%\n", percentual_bom);
    printf("Regular: %.1lf%%\n", percentual_regular);
    printf("Ruim: %.1lf%%\n", percentual_ruim);
    printf("Pessimo: %.1lf%%\n", percentual_pessimo);

    return 0;
}
