/*
L03Ex05: Juros.
DESCRIÇÃO: Codifique um software que receba o valor de um depósito D, o valor da taxa de juros TJ em
percentual (Por exemplo 25.4% será 25.4) e o tempo T em meses que o dinheiro ficará investido;
Calcule e mostre o valor do rendimento em cada mês e o valor total do investimento depois de
transcorrido o tempo determinado.

ENTRADA: Duas entradas double para D e TJ. Uma entrada int para T.

SAÍDA: A saída literal “Rendimento no mês:”, sucedida de espaço em branco e do inteiro relacionado
respectivo mês do período investido (primeiro mês = 0), sucedido do valor do rendimento no respectivo mês, com precis˜ao de duas casas,
sucedido de quebra de linha.
Esse conteúdo deverá ser sucedido de quebra de linha, sendo esse padr˜ao repetido para todos os meses do período de investimento.
Encerrada a impress˜ao dos dados relacionados aos meses, deve-se mostrar o texto “Saldo final do investimento:”,
sucedido de um espaço em branco, do valor final do investimento com precis˜ao de duas casas e de uma quebra de linha.
*/

#include <stdio.h>

int main(){
    int tempo, mes = 0;
    double deposito, taxaJuros, rendimento;

    scanf("%lf", &deposito);
    scanf("%lf", &taxaJuros);
    scanf("%d", &tempo);

    taxaJuros = taxaJuros / 100;

    while (tempo > 0){
        rendimento = deposito * taxaJuros;
        deposito += rendimento;
        printf("Rendimento no mes %d: %.2lf\n", mes, rendimento);
        tempo--;
        mes++;
    }
    printf("Saldo final do investimento: %.2lf\n", deposito);
return 0;
}
