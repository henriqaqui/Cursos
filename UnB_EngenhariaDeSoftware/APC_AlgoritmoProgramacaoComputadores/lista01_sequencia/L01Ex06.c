/*
L01Ex06: Investimento.
DESCRIÇÃO: Codifique um software que receba o valor de uma aplicação inicial, o percentual da taxa de juros
e o percentual de imposto sobre o rendimento. Uma vez lido esses valores, o seu software deve informar
o valor pago de imposto e o valor líquido final da aplicação.
ENTRADA: Três entradas do tipo double, sendo a primeira para o valor do depósito, a segunda para
o valor da taxa de juros e a terceira o percentual de imposto.
SAÍDA: Duas saídas ponto flutuante, com duas casas depois do ponto, sendo a primeira o valor do imposto a pagar
e a sagunda o valor líquido final da aplicação. O último valor deve ser sucedido de uma quebra de linha.
*/

#include <stdio.h>

int main(){
    double valor_investido, per_txjuros, per_imposto_rendimeto, valor_rendimento, valor_imposto, valor_liquido;

    scanf("%lf", &valor_investido);
    scanf("%lf", &per_txjuros);
    scanf("%lf", &per_imposto_rendimeto);

    valor_rendimento = valor_investido * (per_txjuros/100);
    valor_imposto = valor_rendimento * (per_imposto_rendimeto/100);
    valor_liquido = (valor_investido + valor_rendimento) - valor_imposto;

    printf("%.2lf\n%.2lf\n", valor_imposto, valor_liquido);
    return 0;
}
