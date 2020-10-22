/*
PROVA PRÁTICA ARRAY: Soma dos Quadrantes Superiores a Cruz
DESCRIÇÃO: Codifique um software que leia os valores de uma matriz quadrada de ordem 7 de inteiros.
Considere a cruz formada pela linha e pela coluna do meio. Essa mesma cruz definir´a quatro quadrantes na matriz original. Calcule a soma dos elementos da cruz. Calcule a soma dos elementos
de cada quadrante. Os quadrantes que tiverem a soma dos seus elementos superior a soma da cruz
dever˜ao ser acumulados em uma soma geral, a ser mostrada ao final da execuç˜ao do software.
ENTRADA: Uma sequência de 49 números do tipo int. A leitura deve seguir a sequencia linha para colula.
Ou seja, ser˜ao lidos todas as colunas da 1a linha, depois para a 2a linha e por ai em diante.
SAÍDA: Um inteiro resultante da soma dos elementos dos quadrantes, cujo somatório seja superior ao
somatório dos elementos da cruz, sucedido de quebra de linha.
*/
#include <stdio.h>

int main(){
    int matriz[7][7], soma_cruz = 0, soma_quadrante_a = 0, soma_quadrante_b = 0, soma_quadrante_c = 0, soma_quadrante_d = 0, soma_geral = 0;
    int y, x; //controle

    for(y=0;y<7;y++){
        for(x=0;x<7;x++){
            scanf("%d", &matriz[y][x]);
            if(x == 3 || y == 3)
                soma_cruz += matriz[y][x];
            else if(y < 3 && x < 3)
                soma_quadrante_a += matriz[y][x];
            else if(y < 3 && x > 3)
                soma_quadrante_b += matriz[y][x];
            else if(y > 3 && x < 3)
                soma_quadrante_c += matriz[y][x];
            else if(y > 3 && x > 3)
                soma_quadrante_d += matriz[y][x];
        }
    }

    if(soma_quadrante_a > soma_cruz)
        soma_geral += soma_quadrante_a;
    if(soma_quadrante_b > soma_cruz)
        soma_geral += soma_quadrante_b;
    if(soma_quadrante_c > soma_cruz)
        soma_geral += soma_quadrante_c;
    if(soma_quadrante_d > soma_cruz)
        soma_geral += soma_quadrante_d;

    printf("%d\n", soma_geral);

    return 0;
}
