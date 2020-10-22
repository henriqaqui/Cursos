/*
L04Ex09: Dispers˜ao:wq
DESCRIÇÃO: Codifique um software que leia 121 números inteiros. Após a leitura dos 121, deve-se imprimir
o valor resultante do número subtraído da média de todos os números fornecidos, sendo o resultado
dessa subtraçao elevado ao quadrado. Ou seja, o seu software vai calcular o quadrado da dispers˜ao.
ENTRADA: Sequência de 121 números int.
SAÍDA: O valor da dispers˜ao para cada número fornecido, com precis˜ao de uma casa, sucedido de espaço em branco.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int numero[121], numero_array;
    double somatorio, media;

    for(numero_array = 0, somatorio = 0; numero_array < 121; numero_array++){
        scanf("%d", &numero[numero_array]);
        somatorio += numero[numero_array];
    }

    media = somatorio / numero_array;

    for(numero_array = 0; numero_array < 121; numero_array++){
        printf("%.1lf ", pow(numero[numero_array] - media, 2));
    }

    printf("\n");
    return 0;
}
