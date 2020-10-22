/*
L03Ex12: Par ou Ímpar.
DESCRIÇÃO: Codifique um software que leia números inteiros e informe se ele é ímpar ou par. O software
deve parar, caso seja informado um número negativo.
ENTRADA: Sequência de números inteiros.
SAÍDA: O número NUM, sucedido do texto literal ”: par”, para valores pares, ou do texto literal ”:
impar”, para números ímpares, seguido de quebra de linha de para cada valor, n˜ao incluindo o
último número, por ele ser negativo.
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
