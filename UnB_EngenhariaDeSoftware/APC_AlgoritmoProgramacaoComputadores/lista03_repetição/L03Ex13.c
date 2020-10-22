/*
L03Ex13: Tabuada.
DESCRI��O: Codifique um software que apresente a tabuada de um n�mero N (at� multiplica�ao por 10).
ENTRADA: Uma entrada do tipo int.
SA�DA: A tabuada do n�mero mutiplicado por 1 a 10. Cada valor deve ser sucedido de quebra de linha.
Exemplo: 2x1=2 ... 2x10=20
*/

#include <stdio.h>

int main(){
    int  num, multiplicador, resultado;

    scanf("%d", &num);

    for (multiplicador = 1; multiplicador < 11; multiplicador++){
        resultado = num * multiplicador;
        printf("%dx%d=%d\n", num, multiplicador, resultado);
    }
    return 0;
}
