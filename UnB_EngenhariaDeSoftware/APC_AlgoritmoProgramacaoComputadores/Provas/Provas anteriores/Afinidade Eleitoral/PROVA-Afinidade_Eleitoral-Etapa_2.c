/*

*/
#include <stdio.h>
#include <math.h>

int main(){
    int tarefa, opniao[10][23];
    double afinidade[10]={0};
    char nome[10][20], opniao_texto[10][23];;
    int y, x; //controle

    scanf("%d", &tarefa);

    for(y = 0; y < 10; y++){
        for(x=0; x<23; x++){
            scanf("%d", &opniao[y][x]);

            switch (opniao[y][x]){
                case 1:
                   opniao_texto[y][x] = 'F';
                   break;
                case -1:
                   opniao_texto[y][x] = 'C';
                   break;
                case 0:
                   opniao_texto[y][x] = 'N';
                   break;
            }
        }
        scanf("%s", nome[y]);
    }


    switch(tarefa){
        case 1:
            printf("\n");
            for(y = 1; y < 10; y++){
                printf("%s: ", nome[y]);
                for(x=0; x<23; x++){
                    printf("%c ", opniao_texto[y][x]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("\n");
            for(y = 1; y < 10; y++){
               for(x = 0; x < 23; x++){
                    if(opniao[y][x] == 0 || opniao[0][x] == 0){
                        afinidade[y]+= 0.5;
                    }
                    if((opniao[y][x] == opniao[0][x]) && (opniao[y][x] != 0 && opniao[0][x] != 0))
                        afinidade[y]++;
               }
            }

            for(y = 1; y < 10; y++){

                afinidade[y] = (afinidade[y]*100)/23;
                printf("%s: ", nome[y]);
                printf("%.0lf%\n", afinidade[y]);
            }
            break;

    }





    return 0;
}
