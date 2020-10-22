/*
L03Ex27: Coeficiente correlac¸ao linear de pearson.
Segundo Regra (2010), a Correlaçao Linear revela o grau de associação entre duas variáveis aleatórias.
O coeficiente da correlação linear de pearson (p) pode ser obtida através da equação:

    P = [N * Σyx - (Σx * Σy)] /  √ {[N * Σx² - (Σx)²] * [N * Σy² - (Σy)²]}

Em que N representa a quantidade de termos dos somatórios. O índice i de x e y representa o
número de interaç˜oes dos somatórios (i = 1, i = 2, i = 3 e assim por diante). Sabe-se também que
p é um número maior ou igual a -1 e menor ou igual a 1.
Faça um programa que receba dez (10) valores do eixo das abcissas (x) e dez (10) valores do
eixo das ordenadas (y), calcule e mostre valor de p.
ENTRADA: Dez (10) valores do tipo double para abcissas e dez (10) valores do tipo double para as ordenadas.
SAÍDA: Impress˜ao com 2 casas decimais de precis˜ao, procedida de uma quebra de linha.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double x = 0, y =0 , p = 0;
    double somatorio_x = 0, somatorio_y = 0, somatorio_x2 = 0, somatorio_y2 = 0, somatorio_xy = 0;

    for (n = 1; n < 11; n++){
        scanf("%lf", &x);
        scanf("%lf", &y);

        somatorio_x += x;
        somatorio_y += y;
        somatorio_x2 += pow(x, 2);
        somatorio_y2 += pow(y, 2);
        somatorio_xy += x * y;
    }

    p = (10 * somatorio_xy - (somatorio_x * somatorio_y)) /  sqrt((10 * somatorio_x2 - pow(somatorio_x, 2)) * (10 * somatorio_y2 - pow(somatorio_y, 2)));

    printf("%.2lf\n", p);
    return 0;
}
