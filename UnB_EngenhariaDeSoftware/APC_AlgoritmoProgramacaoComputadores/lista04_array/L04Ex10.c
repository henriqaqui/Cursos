/*
L04Ex10: Vari�ncia e Desvio Padr�o.
DESCRI��O: Codifique um software que leia 28 n�meros inteiros. Ap�s a leitura dos 28, deve-se imprimir a
m�dia dos valores resultantes do conjunto de cada n�mero subtra�do da m�dia de todos os n�meros
fornecidos, sendo o resultado dessa subtra��o elevado ao quadrado. Al�m disso o seu software deve
imprimir a raiz quadrada do valor impresso anteriormente. Ou seja o seu software apresentar�
primeiro a vari�ncia e depois o desvio padr�ao dos 28 n�meros.
ENTRADA: Sequ�ncia de 28 n�meros int.
SA�DA: O valor obtido referente a vari�ncia, com precis�ao de um d�gito, sucedido de quebra de linha.
O valor do desvio padr�ao, com precis�ao de um d�gito, sucedido de quebra de linha.
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
