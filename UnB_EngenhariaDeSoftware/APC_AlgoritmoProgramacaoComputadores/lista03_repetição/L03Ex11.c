/*
L03Ex11: Maior e Menor.
DESCRI��O: Codifique um software que leia uma quantidade N de n�meros e informe qual o menor e qual o maior valor.
ENTRADA: O n�umero inteiro N. Uma sequ�ncia de N n�meros.
SA�DA: Texto literal �Menor:�, sucedido de espa�o em branco e do valor do n�mero MENOR. Esse
conte�do deve ser sucedido de quebra de linha e do texto literal �Maior:�, sucedido de espa�o em
branco e do valor do n�mero MAIOR, seguido de quebra de linha.
*/

#include <stdio.h>

int main(){
    int quantidade, num, num_maior = 0, num_menor = 0;

    scanf("%d", &quantidade);

    if (quantidade > 0){
        scanf("%d", &num);
        quantidade--;

        for (num_maior = num, num_menor = num; quantidade > 0; quantidade--){
            scanf("%d", &num);
            if (num <= num_menor)
                num_menor = num;
            if (num >= num_maior)
                num_maior = num;
        }
}
    printf("Menor: %d\nMaior: %d\n", num_menor, num_maior);
    return 0;
}
