/*
L03Ex33: Prova 1 – MKTP
DESCRIÇÃO: Um marketplace é um serviço que oferece recursos para que outras empresas (parceiras) construam sua
loja virtual e comercialize seus serviços, sem a necessidade de desenvolver toda plataforma de e-commerce.
A empresa MKTP lhe contratou para desenvolver o software para controlar o seu serviço de marketplace. O
desenvolvimento será conduzido pelas seguintes entregas:
    1) (2,5 Pontos) Cálculo e saídas referentes a taxa do serviço MKTP e ao valor líquido do parceiro que
    vender o serviço.
    2) (2,5 Pontos) Cálculos e saídas apresentados em 1, adicionados do cálculo do total acumulado de
    taxa do serviço MKTP e do total líquido acumulado do parceiro.
    3) (2,5 Pontos) Cálculos e saídas apresentados em 2 ao longo de um período de 12 meses.
    4) (2,5 Pontos) Cálculos e saídas apresentados em 3 com a totalização da taxa MKTP e do valor
    líquido acumulados ao final do período de 12 meses.
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
