/*
L03Ex14: Superar Altura.
DESCRIÇÃO: Codifique um software que leia duas entradas em ordem decrescente, onde estas representar˜ao a
altura em centímetro de duas pessoas distintas. Sabendo que a primeira pessoa cresce 2 centímetros
por ano e a segunda 3 centímetros por ano, informe quantos anos ser˜ao necessários para que o
segundo seja maior ou do mesmo tamanho que o primeiro.
ENTRADA: Duas entradas do tipo int.
SAÍDA: Uma saída contendo o número inteiro em anos. Este texto deve ser sucedido por uma quebra de linha.
*/

#include <stdio.h>

int main(){
    int  altura_maior, altura_menor, anos;

    scanf("%d", &altura_maior);
    scanf("%d", &altura_menor);

    for (anos = 0; altura_menor < altura_maior; anos++){
        altura_maior += 2;
        altura_menor += 3;
    }
    printf("%d\n", anos);
    return 0;
}
