#include <stdio.h>

int main(){

    int idade;

    printf("Este software informa a classe eleitora baseado na idade digitada:\n\nDigite a idade:\n");
    scanf("%d", &idade);

    if (idade < 16)
        printf("NAO ELEITOR");
    if (idade >= 18 && idade < 65)
        printf("ELEITOR");
    if ((idade >= 16 && idade <18) || idade >= 65)
        printf("FACULTATIVO");
        return 0;
}
