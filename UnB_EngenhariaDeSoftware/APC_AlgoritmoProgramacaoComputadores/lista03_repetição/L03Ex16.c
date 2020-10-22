/*
L03Ex16: Pesquisa de Opiniao˜.
DESCRIÇÃO: Em um cinema, certo dia, cada espectador respondeu a um questionário que perguntava a sua
idade ID e a opini˜ao em relação ao filme OP, seguindo os seguintes critérios:
    1 - Ótimo
    2 - Bom
    3 - Regular
    4 - Ruim
    5 - Péssimo
Codifique um software que faça a leitura dos dados ID e OP da pesquisa de opini˜ao, apresentando ao final:
    • Quantidade de pessoas que responderam a pesquisa - QP.
    • Média de idade das pessoas que responderam a pesquisa - MI.
    • Porcentagem de cada uma das respostas - P1, P2, P3, P4, P5.
A pesquisa será encerrada quando a idade ID fornecida for negativa. Caso seja fornecido OP
diferente das opç˜oes apresentadas, o software deve fazer a leitura novamente deste dado.
ENTRADA: Sequência de dois valores inteiros.
SAÍDA: O texto literal “qtde de participantes:”, sucedido espaço em branco, do valor de QP e de quebra
de linha. Além disso, deve apresentar o texto literal “idade media dos participantes:”, sucedido de
espaço em branco, do valor de MI e de quebra de linha. Por fim, deve apresentar os percentuais
de cada opini˜ao como ponto flutuante, com uma casa decimal. O texto literal “Otimo:”, sucedido
de espaço em branco, do valor P1, % e de quebra de linha deve ser apresentado. O texto literal
“Bom:”, sucedido de espaço em branco, do valor P2, % e de quebra de linha deve ser apresentado.
O texto literal “Regular:”, sucedido de espaço em branco, do valor P3, % e de quebra de linha
deve ser apresentado. O texto literal “Ruim:”, sucedido de espaço em branco, do valor P4, % e de
quebra de linha deve ser apresentado. O texto literal “Pessimo:”, sucedido de espaço em branco,
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
