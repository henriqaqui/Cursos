/*
L03Ex33: Prova 1 � MKTP
DESCRI��O: Um marketplace � um servi�o que oferece recursos para que outras empresas (parceiras) construam sua
loja virtual e comercialize seus servi�os, sem a necessidade de desenvolver toda plataforma de e-commerce.
A empresa MKTP lhe contratou para desenvolver o software para controlar o seu servi�o de marketplace. O
desenvolvimento ser� conduzido pelas seguintes entregas:
    1) (2,5 Pontos) C�lculo e sa�das referentes a taxa do servi�o MKTP e ao valor l�quido do parceiro que
    vender o servi�o.
    2) (2,5 Pontos) C�lculos e sa�das apresentados em 1, adicionados do c�lculo do total acumulado de
    taxa do servi�o MKTP e do total l�quido acumulado do parceiro.
    3) (2,5 Pontos) C�lculos e sa�das apresentados em 2 ao longo de um per�odo de 12 meses.
    4) (2,5 Pontos) C�lculos e sa�das apresentados em 3 com a totaliza��o da taxa MKTP e do valor
    l�quido acumulados ao final do per�odo de 12 meses.
*/

#include <stdio.h>

int main(){
    int valor_mktp, valor_cliente, quantidade_cliente, ciclo;
    int valor_cliente_ciclo, valor_mktp_ciclo, valor_liquido_ciclo;
    int valor_mktp_total = 0, valor_liquido_total = 0, valor_mktp_ano = 0, valor_liquido_ano = 0;
    int meses = 1;

        scanf("%d", &valor_mktp);
        scanf("%d", &valor_cliente);

    do{
        scanf("%d", &quantidade_cliente);

        while (quantidade_cliente > 0){
            scanf("%d", &ciclo);

            valor_cliente_ciclo = valor_cliente * ciclo;
            valor_mktp_ciclo = valor_mktp * ciclo;
            valor_liquido_ciclo = valor_cliente_ciclo - valor_mktp_ciclo;

            valor_mktp_total += valor_mktp_ciclo;
            valor_liquido_total += valor_liquido_ciclo;

            printf("%d %d %d\n", valor_cliente_ciclo, valor_mktp_ciclo, valor_liquido_ciclo);

            quantidade_cliente--;
        }
        valor_mktp_ano += valor_mktp_total;
        valor_liquido_ano += valor_liquido_total;

        printf("%d %d\n", valor_mktp_total, valor_liquido_total);

        valor_mktp_total = 0;
        valor_liquido_total = 0;

        meses++;
    } while (meses <=12);

    printf("%d %d\n", valor_mktp_ano, valor_liquido_ano);

return 0;
}
