/*
L04Ex10: Variância e Desvio Padrão.
DESCRIÇÃO: Codifique um software que leia 28 números inteiros. Após a leitura dos 28, deve-se imprimir a
média dos valores resultantes do conjunto de cada número subtraído da média de todos os números
fornecidos, sendo o resultado dessa subtração elevado ao quadrado. Além disso o seu software deve
imprimir a raiz quadrada do valor impresso anteriormente. Ou seja o seu software apresentará
primeiro a variância e depois o desvio padr˜ao dos 28 números.
ENTRADA: Sequência de 28 números int.
SAÍDA: O valor obtido referente a variância, com precis˜ao de um dígito, sucedido de quebra de linha.
O valor do desvio padr˜ao, com precis˜ao de um dígito, sucedido de quebra de linha.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int numero[28], numero_array;
    double somatorio, media, somatorio_dispersao, media_dispersao;

    for(numero_array = 0, somatorio = 0; numero_array < 28; numero_array++){
        scanf("%d", &numero[numero_array]);
        somatorio += numero[numero_array];
    }

    media = somatorio / numero_array;

    for(numero_array = 0; numero_array < 28; numero_array++){
        somatorio_dispersao += pow(numero[numero_array] - media, 2);
    }

    media_dispersao = somatorio_dispersao/ 28;

    printf("%.1lf\n", media_dispersao);
    printf("%.1lf\n", sqrt(media_dispersao));

    return 0;
}
