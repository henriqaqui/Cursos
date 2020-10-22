#include <stdio.h>

int main(){
    int codigo_voo, direcao_voo;
    long long int pedido_voo;

    scanf("%d", &codigo_voo);

    while(codigo_voo > 0){

        scanf("%d", &direcao_voo);
        scanf("%lli", &pedido_voo);

        printf("%d %d %lli\n", codigo_voo, direcao_voo, pedido_voo);

        scanf("%d", &codigo_voo);
    }
    return 0;
}
