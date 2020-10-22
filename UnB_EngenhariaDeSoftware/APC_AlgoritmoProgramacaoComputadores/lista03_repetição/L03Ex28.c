/*
L03Ex28 Resistência em série e paralelo.
A resistência em série (s) é calculada de acordo com a equaç˜ao:

    RS = Σr

A resistência em paralelo (rp) é calculada de acordo com a equaçao:

    RP = 1 / Σr

Em que N representa a quantidade de termos dos somatórios e Ri os valores das resistências.
Faça um programa que receba o valor de seis (6) resistências e que calcule as resistências equivalentes para um circuito
em série, para um circuto em paralelo e a diferença da maior resistência para a média das resistências.
ENTRADA: Entradas do tipo double.
SAÍDA: Três (3) saídas com quatro (4) casas decimais de precis˜ao, procedida de uma quebra de linha.
*/

#include <stdio.h>

int main(){
    int n;
    double resistencia_serie = 0, resistencia_paralelo = 0, somatorio_resistencia = 0, resistencia, resistencia_maior, diferenca, media;

    for (n = 1; n < 7; n++){
        scanf("%lf", &resistencia);

        somatorio_resistencia += resistencia;

        if (n == 1)
            resistencia_maior = resistencia;
        if (resistencia > resistencia_maior)
            resistencia_maior = resistencia;
    }

    resistencia_serie = somatorio_resistencia;
    resistencia_paralelo = 1 / somatorio_resistencia;
    media = somatorio_resistencia / 6;
    diferenca = resistencia_maior - media;

    printf("%.4lf %.4lf %.4lf\n", resistencia_serie, resistencia_paralelo, diferenca);
    return 0;
}
