/*
L03Ex04: Fatorial.
DESCRIÇÃO: Codifique um software que calcule N! (fatorial de N), sendo que o valor de N fornecido pelo usuário.
Sabe-se que: N! = 1 x 2 x 3 x 4 x .... x N.
    OBS:
    0! = 1 (fatorial do número zero é igual a 1 por definição).
    O seu software n˜ao deve calcular o fatorial de entrada negativa.
ENTRADA: Uma entrada int.
SAÍDA: Uma saída int para entrada maior ou igual a zero, ou o texto literal “nao existe” para os outros casos.
A saída é sempre finalizada com uma quebra de linha.
*/

#include <stdio.h>

int main(){
    int n, fatorial_n;

    scanf("%d", &n);

    if (n >= 0){
        for(fatorial_n = 1; n > 1; n--){
            fatorial_n *= n;
        }
        printf("%d\n", fatorial_n);
    }   else
            printf("nao existe\n");
    return 0;
}
