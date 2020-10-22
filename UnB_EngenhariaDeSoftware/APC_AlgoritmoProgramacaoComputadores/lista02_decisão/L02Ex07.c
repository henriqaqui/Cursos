#include <stdio.h>

int main(){

    double pes, alt, imc;

    printf("Este software calcula o IMC.\n\nDigite o peso:\n");
    scanf("%lf", &pes);
    printf("Digite a altura:\n");
    scanf("%lf", &alt);

    imc = pes / pow (alt, 2);

    if (imc < 20)
        printf("ABAIXO\n");
    if (imc >= 20 && imc < 25)
        printf("NORMAL\n");
    if (imc >= 25 && imc < 30)
        printf("SOBREPESO\n");
    if (imc >=30 && imc < 40)
        printf("OBESO\n");
    if (imc >= 40)
        printf("MORBIDO\n");
    return 0;
}
