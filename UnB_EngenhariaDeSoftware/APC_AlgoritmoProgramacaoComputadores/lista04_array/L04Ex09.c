/*
L04Ex09: Dispers�ao:wq
DESCRI��O: Codifique um software que leia 121 n�meros inteiros. Ap�s a leitura dos 121, deve-se imprimir
o valor resultante do n�mero subtra�do da m�dia de todos os n�meros fornecidos, sendo o resultado
dessa subtra�ao elevado ao quadrado. Ou seja, o seu software vai calcular o quadrado da dispers�ao.
ENTRADA: Sequ�ncia de 121 n�meros int.
SA�DA: O valor da dispers�ao para cada n�mero fornecido, com precis�ao de uma casa, sucedido de espa�o em branco.
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
