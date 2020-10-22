/*
L03Ex14: Superar Altura.
DESCRI��O: Codifique um software que leia duas entradas em ordem decrescente, onde estas representar�ao a
altura em cent�metro de duas pessoas distintas. Sabendo que a primeira pessoa cresce 2 cent�metros
por ano e a segunda 3 cent�metros por ano, informe quantos anos ser�ao necess�rios para que o
segundo seja maior ou do mesmo tamanho que o primeiro.
ENTRADA: Duas entradas do tipo int.
SA�DA: Uma sa�da contendo o n�mero inteiro em anos. Este texto deve ser sucedido por uma quebra de linha.
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
