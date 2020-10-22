#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int codigo_voo[20], direcao_voo[20], passageiros[20];
    long long int pedido_voo[20];
    int y = 0, x; //controle

    scanf("%d", &codigo_voo[y]);

    while(codigo_voo[y] > 0 && y < 20){

        scanf("%d", &direcao_voo[y]);
        scanf("%lli", &pedido_voo[y]);
        scanf("%d", &passageiros[y]);

        y++;
        if(y==20)
            break;
        scanf("%d", &codigo_voo[y]);
    }


    if(y == 20 || codigo_voo[y] <=0)
        y--;


    for(;y>=0;y--){
        printf("%d ", codigo_voo[y]);
        printf("%d ", direcao_voo[y]);
        printf("%lli ", pedido_voo [y]);
        printf("%d\n", passageiros[y]);
    }
    return 0;
}










