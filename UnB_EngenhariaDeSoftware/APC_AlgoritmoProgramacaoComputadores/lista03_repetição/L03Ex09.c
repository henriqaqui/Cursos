/*
L03Ex09: Pre�os de Produtos.
DESCRI��O: Codifique um software que leia a quantidade Q e o pre�o PR de v�rios produtos diferentes
comprados por uma empresa, e apresente o total gasto por ela. O final da lista de produtos dever�
ser indicado pelo usu�rio informando uma quantidade nula ou negativa de produtos. Lembre-se de
validar a entrada dos valores: em caso de pre�os negativos, o software deve ler o pre�o novamente.
ENTRADA: Pares de entrada int para Q para a quantidade e double P R. Quando o Q for menor ou igual a
zero o software deve encerrar a leitura e apresentar o resultado.
SA�DA: Apresentar o valor total gasto ou seja, um valor com ponto flutuante com precis�ao de duas
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
