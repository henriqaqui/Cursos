#include <stdio.h>

int main(){
    int codigo_voo, direcao_voo;
    long long int pedido_voo;
    int mes, mes_atual = 0, partida_mes = 0, chegada_mes = 0;

    scanf("%d", &codigo_voo);

    while(codigo_voo > 0){

        scanf("%d", &direcao_voo);
        scanf("%lli", &pedido_voo);

        // INÍCIO item 3
        mes = pedido_voo/100000000%100;

        if(mes_atual == 0)
            mes_atual = mes;
        else if(mes_atual != mes){
            printf("Partidas no mes %d : %d\n",mes_atual , partida_mes);
            printf("Chegadas no mes %d : %d\n\n",mes_atual, chegada_mes);

            mes_atual = mes;

            partida_mes = 0;
            chegada_mes = 0;
        }
        // FIM item 3

        printf("%d ", codigo_voo);

        if (direcao_voo == 1){
            printf("partida ");
            partida_mes++;
        }
        else if (direcao_voo == 2){
            printf("chegada ");
            chegada_mes++;
        }

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
