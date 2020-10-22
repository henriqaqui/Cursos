/*
L03Ex19: Maior e menor entre 20 n�meros.
DESCRI��O: Codifique um software que leia uma quantidade de 20 n�meros e informe qual o menor e qual o maior valor.
ENTRADA: Uma sequ�ncia de 20 n�meros.
SA�DA: Texto literal �Menor:�, sucedido de espa�o em branco e do valor do n�mero MENOR�. Esse
conte�do deve ser sucedido de quebra de linha e do texto literal �Maior:�, sucedido de espa�o em
branco e do valor do n�mero MAIOR�, seguido de quebra de linha.
*/

#include <stdio.h>

int main(){

    int  quantidade, numero, numero_maior, numero_menor;

    scanf("%d", &numero);

    numero_maior = numero;
    numero_menor = numero;

    for (quantidade = 19; quantidade > 0; quantidade--){
        scanf("%d", &numero);
        if (numero >= numero_maior)
            numero_maior = numero;
        else if (numero <= numero_menor)
            numero_menor = numero;
    }

    printf("Menor: %d\nMaior: %d\n", numero_menor, numero_maior);
    return 0;
}
