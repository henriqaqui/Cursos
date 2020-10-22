#include <stdio.h>

int main(){

    double sm, c;

    printf("Este software calcula quantos porcentos de juros o cliente caixa tem no credito especial baseado no saldo médio do ultimo ano\n\nDigite o Saldo medio do ultimo ano:\n");
    scanf("%lf", &sm);

    if (sm <= 500)
        c = 0;
    if (sm > 500 && sm <=1000)
        c = sm * 0.3;
    if (sm > 1000 && sm <=3000)
        c = sm * 0.4;
    if (sm > 3000)
        c = sm * 0.5;

    printf("O credito especial e:\n%.2lf", c);
    return 0;
}
