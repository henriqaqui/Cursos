/*
L03Ex23: Carteira de a��es .
DESCRI��O: Um investidor possui uma carteira de investimentos com 6 (seis) empresas.
Para investir nessas empresas, o investidor tem a op��o de comprar blocos de a��es das mesmas e vender depois
no intuito de obter lucro. O investidor possui R$ 50.000,00 (cinquenta mil reais) para aplicar em
sua carteira de investimentos. Esse � o dinheiro dispon�vel que ele possui para comprar blocos
de a��es das empresas de sua carteira de investimentos. Se, por exemplo, o investidor ganhar
R$5.000 (cinco mil reais) comprando e vendendo blocos de a��es em sua carteira de investimentos,
ele obtem 10% de lucro sobre o capital aplicado.
Fa�a um programa que receba o pre�o de compra e o pre�o de venda dos blocos de a��es de
cada empresa, calcule e mostre o percentual de lucro ou prejuizo sob o capital aplicado, quantidade
de blocos de a��es que geraram lucro e quantidade de blocos de a�oes que geraram preju�zo.
ENTRADA: Entradas do tipo double.
SA�DA: Uma sa�da do tipo double com duas casas decimais de precis�ao. Duas sa�das do tipo int.
A �ltima sa�da deve ser procedida de uma quebra de linha.
*/
#include <stdio.h>

int main(){

    double compra, venda, rentabilidade_valor = 0, rentabilidade_porcentagem;
    int empresas, empresas_lucro = 0, empresa_prejuizo = 0;

    for(empresas = 6; empresas > 0; empresas--){
        scanf("%lf", &compra);
        scanf("%lf", &venda);

        if (venda > compra)
            empresas_lucro++;
        else if (venda < compra)
            empresa_prejuizo++;

        rentabilidade_valor += venda - compra;
    }

    rentabilidade_porcentagem = rentabilidade_valor * 100 / 50000;

    printf("%.2lf %d %d\n", rentabilidade_porcentagem, empresas_lucro, empresa_prejuizo);
    return 0;
}
