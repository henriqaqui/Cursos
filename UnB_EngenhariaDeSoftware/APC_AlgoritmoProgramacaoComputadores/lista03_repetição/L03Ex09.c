/*
L03Ex09: Preços de Produtos.
DESCRIÇÃO: Codifique um software que leia a quantidade Q e o preço PR de vários produtos diferentes
comprados por uma empresa, e apresente o total gasto por ela. O final da lista de produtos deverá
ser indicado pelo usuário informando uma quantidade nula ou negativa de produtos. Lembre-se de
validar a entrada dos valores: em caso de preços negativos, o software deve ler o preço novamente.
ENTRADA: Pares de entrada int para Q para a quantidade e double P R. Quando o Q for menor ou igual a
zero o software deve encerrar a leitura e apresentar o resultado.
SAÍDA: Apresentar o valor total gasto ou seja, um valor com ponto flutuante com precis˜ao de duas
casas, seguido de quebra de linha.
*/

#include <stdio.h>

int main(){
    int quantidade;
    double preco_unidade, preco_total = 0;

    do{
        scanf("%d", &quantidade);
        if (quantidade > 0){
            do {
                scanf("%lf", &preco_unidade);
            } while (preco_unidade <= 0);
            preco_total += preco_unidade * quantidade;
        }
    }while (quantidade > 0);
    printf("%.2lf\n", preco_total);
return 0;
}
