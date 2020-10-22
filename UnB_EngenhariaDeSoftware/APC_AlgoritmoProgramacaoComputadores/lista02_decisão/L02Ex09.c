#include <stdio.h>

int main(){

    int idade;

    printf("Este software indica a categoria de um nadador baseada na idade.\n\nDigite a idade:\n");
    scanf("%d", &idade);

    if (idade < 5)
        printf("SEM CATEGORIA\n");
    if (idade >= 5 && idade <=7)
        printf("INFANTIL A\n");
    if (idade >= 8 && idade <= 10)
        printf("INFANTIL B\n");
    if (idade >= 11 && idade <= 13)
        printf("JUVENIL A\n");
    if (idade >= 14 && idade <= 17)
        printf("JUVENIL B\n");
    if (idade >= 18)
        printf("SENIOR\n");
    return 0;
}
