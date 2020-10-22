/*
L03Ex18: Dias de Vida.
DESCRI��O: Codifique um software que mostre a idade REAL em dias de uma pessoa, a partir da leitura dos seguintes dados:
    � dia do nascimento - DN
    � m�s do nascimento - MN
    � ano do nascimento - AN
    � dia da data corrente - DH
    � m�s da data corrente - MH
    � ano da data corrente - AH
Para efeito de c�lculo, assuma que todos os meses possuem 30 dias e que n�ao exista ano bissexto.
Al�m disso, anos menores ou iguais a zero e maiores ou iguais a 2020 s�ao inv�lidos.
Caso o usu�rio fornec�a os valores fora da faixa aceit�vel, ou seja, inv�lidos, o software deve
solicitar novamente tal valor. Especialmente no fornecimento do valor de AH, deve-se verificar se
a data do nascimento � mais antiga do que a data corrente. Caso contr�rio o valor de AH deve ser
solicitado novamente, at� que seja fornecido um AH maior do que AN.
    DICA: Atenda o caso mais simples, em que o usu�rio forneceria valores corretos e v� incrementando
    a capacidade de tratar entradas inv�lidas, comec�ando pelo tratamento de dia, m�s, ano e, por fim,
    datas de nascimento mais antigas que a data corrente informada.
ENTRADA: Seis entradas tipo int. Cada entrada pode ser lida quantas vezes forem necess�rias, para que
seu valor esteja na faixa aceit�vel.
SA�DA: Valor int referente a quantidade de dias vividos de acordo com a diferen�a entre as datas.
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
    } while ((ano_atual <= 0 || ano_atual >= 2020) || ano_atual <= ano_nasc); //melhor que seja "ano_atual < ano_nasc" porque tamb�m contaria os dias caso nascido no mesmo ano.

    dia_total += (ano_atual - ano_nasc) * ano;
    dia_total += (mes_atual - mes_nasc) * mes;
    dia_total += dia_atual - dia_nasc;

    printf("%d\n", dia_total);

    return 0;
}
