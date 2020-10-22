/*
L01Ex09: Quadrado.
DESCRIÇÃO: Codifique um software que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
ENTRADA: Duas entradas do tipo double.
SAÍDA: Uma saída do tipo double com uma casa decimal, sucedida de uma quebra de linha.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double base, expoente, resultado;

    scanf("%lf", &base);
    scanf("%lf", &expoente);

    resultado = pow (base, expoente);

    printf("%.1lf\n", resultado);
    return 0;
}
