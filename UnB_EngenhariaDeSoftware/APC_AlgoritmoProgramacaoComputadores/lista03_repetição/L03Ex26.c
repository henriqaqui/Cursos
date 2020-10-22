/*
L03Ex26: Investimento.
DESCRIÇÃO: Um fundo de investimento oferece aos seus clientes um rendimento de 2.25% para
negociação de debêntures e 1.75% para negociação de commodities. Para contas com
depósito que totalizam valor inferior a 10.000 o fundo aplica em commodities. Quando o
saldo é maior ou igual a 10.000, o fundo automaticamente aplica o valor depositado em
debêntures.
Codifique um software que leia o valor do depositado mensalmente pelo investidor ao
longo de 12 (doze) meses, mostre o seu lucro sobre o total de montante depositado.
A tabela a seguir demonstra em detalhes como o cálculo deve ser realizado.

        Mes  Deposito     Deposito Total    Juros Aplicado   Rendimento Mensal     Rendimento Total

        1    $2,362.00      $2,362.00        1.75%           $41.34                $41.34
        2    $6,017.00      $8,379.00        1.75%           $147.36               $188.69
        3    $3,595.00      $11,974.00       2.25%           $273.66               $462.35
        4    $1,142.00      $13,116.00       2.25%           $305.51               $767.86
        5    $754.00        $13,870.00       2.25%           $329.35               $1,097.22
        6    $4,554.00      $18,424.00       2.25%           $439.23               $1,536.44
        7    $5,188.00      $23,612.00       2.25%           $565.84               $2,102.28
        8    $6,356.00      $29,968.00       2.25%           $721.58               $2,823.86
        9    $248.00        $30,216.00       2.25%           $743.40               $3,567.26
        10   $9,188.00      $39,404.00       2.25%           $966.85               $4,534.12
        11   $2,092.00      $41,496.00       2.25%           $1,035.68             $5,569.79
        12   $4,059.00      $45,555.00       2.25%           $1,150.31 $           6,720.10

ENTRADA: Entradas do tipo double.
SAÍDA: Saída do tipo double com duas casas decimais de precisão, sucedida de uma quebra de linha.
*/

#include <stdio.h>

int main(){
    int mes;
    double saldo = 0, deposito_mes, deposito_total = 0, rendimento_mes = 0, rendimento_total;

    for(mes = 12; mes > 0; mes--){
        scanf("%lf", &deposito_mes);

        deposito_total += deposito_mes;
        saldo += deposito_mes;

        if (saldo < 10000)
            rendimento_mes = saldo * 0.0175;
        else if (saldo >= 10000)
            rendimento_mes = saldo * 0.0225;

        saldo += rendimento_mes;
    }
    rendimento_total = saldo - deposito_total;

    printf("%.2lf\n", rendimento_total);
    return 0;
}
