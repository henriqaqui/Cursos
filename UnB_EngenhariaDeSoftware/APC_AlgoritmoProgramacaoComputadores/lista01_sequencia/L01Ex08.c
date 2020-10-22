/*
L01Ex08: Quadrado, Cubo e Raiz.
DESCRIÇÃO: Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
    a)O número digitado ao quadrado.
    b)O número digitado ao cubo.
    c)A raiz quadrada do número digitado.
    d)A raiz cúbica do número digitado.
ENTRADA: Uma entrada do tipo int.
SAÍDA: Uma saída para o quadrado do valor fornecido. Outra saída para o cubo do nímero fornecida.
Outra saída para a raiz quadrada do número digitado. Por fim, apresente a raiz cúbica do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    double num_quadrado, num_cubo, num_raiz_quadrada, num_raiz_cubica;

    scanf("%d", &num);

    num_quadrado = pow (num, 2);
    num_cubo = pow (num, 3);
    num_raiz_quadrada = sqrt (num);
    num_raiz_cubica = pow (num, 1/3.); //poderia ser também: pow (num, (double)1/3)

    printf("%.1lf\n%.1lf\n%.1lf\n%.1lf\n", num_quadrado, num_cubo, num_raiz_quadrada, num_raiz_cubica);
    return 0;
}
