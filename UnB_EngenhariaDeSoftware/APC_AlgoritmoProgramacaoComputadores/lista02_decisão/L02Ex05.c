#include <stdio.h>

int main(){

    int n1, n2, med;

    printf("Este software calcula duas notas bimestrais e da o resultado final:\nAPROVADO, EXAME ou REPROVADO.\n\nDigite a primeira nota:\n");
    scanf("%d", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%d", &n2);

    med = (n1 + n2) / 2;

    if (med >= 3 && med < 7)
        printf("EXAME");
    if (med >= 7)
        printf("APROVADO");
    if (med < 3)
        printf("REPROVADO");
        return 0;
}
