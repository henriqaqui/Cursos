#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int codigo_voo[20], direcao_voo[20], passageiros[20];
    long long int pedido_voo[20];
    int y = 0, x; //controle
    int mes, mes_atual = 0;
    int partida_mes = 0, chegada_mes = 0;
    int ano, ano_atual = 0;
    int partida_ano = 0,chegada_ano = 0;

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

// PRINT

    for(;y>=0;y--){

        ano = pedido_voo[y]/10000000000; // Item 4
        if (ano_atual == 0)
            ano_atual = ano;


        if(ano_atual != ano){
            printf("Partidas no ano %d : %d\n", ano_atual, partida_ano);
            printf("Chegadas no ano %d : %d\n", ano_atual, chegada_ano);

            partida_ano = 0;
            chegada_ano = 0;

            ano_atual = ano;
        }




        //MES
        mes = pedido_voo[y]/100000000%100;

        if(mes_atual == 0)
            mes_atual = mes;
        else if (mes_atual != mes){
            printf("Partidas no mes %d : %d\n",mes_atual , partida_mes);
            printf("Chegadas no mes %d : %d\n\n",mes_atual, chegada_mes);

            partida_mes = 0;
            chegada_mes = 0;

            mes_atual = mes;
        }


        printf("%d ", codigo_voo[y]);


            if (direcao_voo[y] == 1){
            printf("partida ");
            partida_mes++;
            partida_ano++;
            }
            else{
            printf("chegada ");
            chegada_mes++;
            chegada_ano++;
            }


        printf("%lli", pedido_voo[y]/1000000%100/10);
        printf("%lli/", pedido_voo[y]/1000000%10);
        printf("%lli", pedido_voo[y]/100000000%100/10);
        printf("%lli/", pedido_voo[y]/100000000%10);
        printf("%lli", pedido_voo[y]/10000000000000); // ano
        printf("%lli", pedido_voo[y]/1000000000000%10); // ano
        printf("%lli", pedido_voo[y]/100000000000%100); // ano
        printf("%lli ", pedido_voo[y]/10000000000%10); // ano

        //HORA
        printf("%lli", pedido_voo[y]%1000000/100000);
        printf("%lli:", pedido_voo[y]%100000/10000);
        printf("%lli", pedido_voo[y]%10000/1000);
        printf("%lli:", pedido_voo[y]%1000/100);
        printf("%lli", pedido_voo[y]%100/10);
        printf("%lli ", pedido_voo[y]%10);

        printf("%d\n", passageiros[y]);
    }
    if(mes_atual == mes){
            printf("Partidas no mes %d : %d\n",mes_atual , partida_mes);
            printf("Chegadas no mes %d : %d\n\n",mes_atual, chegada_mes);
    }

     if(ano_atual == ano){
            printf("Partidas no ano %d : %d\n", ano_atual, partida_ano);
            printf("Chegadas no ano %d : %d\n", ano_atual, chegada_ano);
     }

    return 0;
}










