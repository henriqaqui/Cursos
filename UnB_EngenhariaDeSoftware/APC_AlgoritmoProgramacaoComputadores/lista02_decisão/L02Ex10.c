#include <stdio.h>

int main(){

    int idade;

    printf("Este software calcula o valor de uma mensalidade baseado na idade.\n\nDigite uma idade:\n");
    scanf("%d", &idade);

    if (idade < 10)
        printf("R$ 30.00\n");
    if (idade >= 10 && idade <30)
        printf("R$ 60.00\n");
    if (idade >= 30 && idade < 46)
        printf("R$ 120.00\n");
    if (idade >= 46 && idade <60)
        printf("R$ 150.00\n");
    if (idade >= 60 && idade <=65)
        printf("R$250.00\n");
    if (idade > 65)
        printf("R$ 400.00\n");
    return 0;
}
