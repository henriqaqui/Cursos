/*
L03Ex12: Par ou �mpar.
DESCRI��O: Codifique um software que leia n�meros inteiros e informe se ele � �mpar ou par. O software
deve parar, caso seja informado um n�mero negativo.
ENTRADA: Sequ�ncia de n�meros inteiros.
SA�DA: O n�mero NUM, sucedido do texto literal �: par�, para valores pares, ou do texto literal �:
impar�, para n�meros �mpares, seguido de quebra de linha de para cada valor, n�ao incluindo o
�ltimo n�mero, por ele ser negativo.
*/

#include <stdio.h>

int main(){
    int  num;

    do {
        scanf("%d", &num);
            if (num >= 0 && num % 2 == 0){
                printf("%d: par\n", num);
            } else if (num >= 0){
                printf("%d: impar\n", num);
            }
    } while (num >= 0);
    return 0;
}
