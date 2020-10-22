#include <stdio.h>

int main(){

    int ped1, ped2;
    double pre1, pre2, total;

    printf("Este software calcula o total a ser pago de um pedido de dois itens.\n\n");
    printf("1 - Cachorro-Quente\n2 - X-Salada\n3 - X-Bacon\n4 - Pao de Queijo\n5 - Refri\n");
    printf("Digite o numero do primeiro item:\n");
    scanf("%d", &ped1);
    printf("\nDigite o numero do segundo item:\n");
    scanf("%d", &ped2);

    switch (ped1){
    case 1:
        pre1 = 5;
        break;
    case 2:
        pre1 = 7;
        break;
    case 3:
        pre1 = 7.5;
        break;
    case 4:
        pre1 = 3.5;
        break;
    case 5:
        pre1 = 3;
        break;
    }

    switch (ped2){
    case 1:
        pre2 = 5;
        break;
    case 2:
        pre2 = 7;
        break;
    case 3:
        pre2 = 7.5;
        break;
    case 4:
        pre2 = 3.5;
        break;
    case 5:
        pre2 = 3;
        break;
    }

    total = pre1 + pre2;

    printf("Total: R$ %.2lf", total);
    return 0;
}
