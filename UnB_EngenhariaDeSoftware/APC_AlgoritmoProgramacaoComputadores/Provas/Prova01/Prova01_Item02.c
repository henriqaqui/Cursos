#include <stdio.h>

int main(){
    int codigo_voo, direcao_voo;
    long long int pedido_voo;

    scanf("%d", &codigo_voo);

    while(codigo_voo > 0){

        scanf("%d", &direcao_voo);
        scanf("%lli", &pedido_voo);

        printf("%d ", codigo_voo);

        if (direcao_voo == 1)
            printf("partida ");
        else if (direcao_voo == 2)
            printf("chegada ");
        // DATA
        printf("%lli", pedido_voo/1000000%100/10);
        printf("%lli/", pedido_voo/1000000%10);
        printf("%lli", pedido_voo/100000000%100/10);
        printf("%lli/", pedido_voo/100000000%10);
        printf("%lli", pedido_voo/10000000000000); // ano
        printf("%lli", pedido_voo/1000000000000%10); // ano
        printf("%lli", pedido_voo/100000000000%100); // ano
        printf("%lli ", pedido_voo/10000000000%10); // ano

        //HORA
        printf("%lli", pedido_voo%1000000/100000);
        printf("%lli:", pedido_voo%100000/10000);
        printf("%lli", pedido_voo%10000/1000);
        printf("%lli:", pedido_voo%1000/100);
        printf("%lli", pedido_voo%100/10);
        printf("%lli\n", pedido_voo%10);

        scanf("%d", &codigo_voo);
    }
    return 0;
}
