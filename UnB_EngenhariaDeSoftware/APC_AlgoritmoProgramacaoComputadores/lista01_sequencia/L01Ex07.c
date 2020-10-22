/*
L01Ex07: Volume Cilindro.
DESCRIÇÃO: Codifique um software que receba a altura e o raio de um cilindro circular e imprima o seu volume.
Sabe-se que o volume do cilindro é igual a: 3, 1416 * raio² * altura.
ENTRADA: Duas entradas do tipo double, sendo a primeira para a altura e a segunda para o raio do cilindro.
SAÍDA: Uma saída double, com uma casa depois do ponto referente ao volume do cilindro.
Este valor deve ser sucedido de uma quebra de linha.
*/

#include <stdio.h>
#include <math.h> // biblioteca com funções matemáticas

int main(){
    double altura, raio, volume;

    scanf("%lf", &altura);
    scanf("%lf", &raio);

    volume = 3.1416 * pow (raio, 2) * altura;

    printf("%.1lf\n", volume);
    return 0;
}
