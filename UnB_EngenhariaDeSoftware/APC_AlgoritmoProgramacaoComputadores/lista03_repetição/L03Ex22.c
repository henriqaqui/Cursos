/*
L03Ex22: Vendas e Comiss�o.
DESCRI��O: Uma loja de eletrodom�sticos tem um quadro de 10 (dez) vendedores. Cada vendedor recebe
comiss�ao de acordo com as vendas atingidas no m�s, conforme mostrado na tabela 1. Fa�a um
programa que receba o c�digo de cada vendedor e o valor total de suas vendas no m�s. Calcule a
comiss�ao obtida por cada vendedor e, ao final, mostre o c�digo do vendedor que recebeu a maior
comiss�ao e o c�digo do vendedor que recebeu a menor comiss�ao.
    Tabela 1: Vendas e Comiss�ao
        Vendas no m�s em reais / Comiss�ao em porcentagem
        At� 5.000,00 / 1.5
        Acima de 5.000,00 e abaixo de 15.000,00 / 3.5
        A partir de 15.000,00 / 4.7
ENTRADA: Dez entradas do tipo int e dez do tipo double.
SA�DA: Sa�da do tipo int, tipo double, tipo int e tipo double. Sa�das tipo double devem ter duas casas
decimais. A �ltima sa�da deve ser sucedida de uma quebra de linha.
*/

#include <stdio.h>

int main(){

    int  vendedor, vendedor_maior, vendedor_menor, qnt_vendedor;
    double valor_vendas, comissao_maior, comissao_menor, valor_comissao;

    for (qnt_vendedor = 10; qnt_vendedor > 0; qnt_vendedor--){

        scanf("%d", &vendedor);
        scanf("%lf", &valor_vendas);

        if (valor_vendas <= 5000){
            valor_comissao = valor_vendas * 0.015;
        }else if (valor_vendas > 5000 && valor_vendas < 15000){
            valor_comissao = valor_vendas * 0.035;
        }else if (valor_vendas >= 15000){
            valor_comissao = valor_vendas * 0.047;
        }

        if (qnt_vendedor == 10){
            comissao_maior = valor_comissao;
            vendedor_maior = vendedor;
            comissao_menor = valor_comissao;
            vendedor_menor = vendedor;
        }

        if (valor_comissao > comissao_maior){
            comissao_maior = valor_comissao;
            vendedor_maior = vendedor;
        } else if (valor_comissao < comissao_menor){
            comissao_menor = valor_comissao;
            vendedor_menor = vendedor;
        }
    }

    printf("%d %.2lf %d %.2lf\n", vendedor_maior, comissao_maior, vendedor_menor, comissao_menor);
    return 0;
}
