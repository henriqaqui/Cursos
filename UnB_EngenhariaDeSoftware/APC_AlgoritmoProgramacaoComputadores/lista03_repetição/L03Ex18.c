/*
L03Ex18: Dias de Vida.
DESCRIÇÃO: Codifique um software que mostre a idade REAL em dias de uma pessoa, a partir da leitura dos seguintes dados:
    • dia do nascimento - DN
    • mês do nascimento - MN
    • ano do nascimento - AN
    • dia da data corrente - DH
    • mês da data corrente - MH
    • ano da data corrente - AH
Para efeito de cálculo, assuma que todos os meses possuem 30 dias e que n˜ao exista ano bissexto.
Além disso, anos menores ou iguais a zero e maiores ou iguais a 2020 s˜ao inválidos.
Caso o usuário fornec¸a os valores fora da faixa aceitável, ou seja, inválidos, o software deve
solicitar novamente tal valor. Especialmente no fornecimento do valor de AH, deve-se verificar se
a data do nascimento é mais antiga do que a data corrente. Caso contrário o valor de AH deve ser
solicitado novamente, até que seja fornecido um AH maior do que AN.
    DICA: Atenda o caso mais simples, em que o usuário forneceria valores corretos e vá incrementando
    a capacidade de tratar entradas inválidas, comec¸ando pelo tratamento de dia, mês, ano e, por fim,
    datas de nascimento mais antigas que a data corrente informada.
ENTRADA: Seis entradas tipo int. Cada entrada pode ser lida quantas vezes forem necessárias, para que
seu valor esteja na faixa aceitável.
SAÍDA: Valor int referente a quantidade de dias vividos de acordo com a diferenÇa entre as datas.
*/
#include <stdio.h>

int main(){

    int  dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual;
    int ano = 360, mes = 30;
    int dia_total = 0;

    do{
        scanf("%d", &dia_nasc);
    } while (dia_nasc <= 0 || dia_nasc > 30);

    do{
        scanf("%d", &mes_nasc);
    } while (mes_nasc <= 0 || mes_nasc > 12);

    do{
        scanf("%d", &ano_nasc);
    } while (ano_nasc <= 0 || ano_nasc >= 2020);

    do{
        scanf("%d", &dia_atual);
    } while (dia_atual <= 0 || dia_atual > 30);

    do{
        scanf("%d", &mes_atual);
    } while (mes_atual <= 0 || mes_atual > 12);

   do{
        scanf("%d", &ano_atual);
    } while ((ano_atual <= 0 || ano_atual >= 2020) || ano_atual <= ano_nasc); //melhor que seja "ano_atual < ano_nasc" porque também contaria os dias caso nascido no mesmo ano.

    dia_total += (ano_atual - ano_nasc) * ano;
    dia_total += (mes_atual - mes_nasc) * mes;
    dia_total += dia_atual - dia_nasc;

    printf("%d\n", dia_total);

    return 0;
}
