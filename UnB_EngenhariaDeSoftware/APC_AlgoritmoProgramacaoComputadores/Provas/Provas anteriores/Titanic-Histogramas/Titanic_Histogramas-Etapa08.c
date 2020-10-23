#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int tarefa, numero_passageiros;
    int dado_classe, dado_irmao, dado_pai, dado_sobreviveu;
    float dado_idade;
    char dado_sexo_c[2], dado_embarque_c[2];
    int y, x; //controle
    int hist_classe_sobreviveu[3] = {0};
    int hist_classe_morreu[3] = {0};
    int hist_sexo_sobreviveu[2] = {0,0};
    int hist_sexo_morreu[2] = {0,0};
    int hist_idade_sobreviveu[100] = {0};
    int hist_idade_morreu[100] = {0};
    int hist_irmao_sobreviveu[10] = {0};
    int hist_irmao_morreu[10] = {0};
    int hist_pai_sobreviveu[10] = {0};
    int hist_pai_morreu[10] = {0};
    int hist_embarcou_sobreviveu[3] = {0};
    int hist_embarcou_morreu[3] = {0};
    int hist_total_sobreviveu[128] = {0};
    int hist_total_morreu[128] = {0};
    int hist_diferenca [128] = {0};

    scanf("%d", &tarefa);
    scanf("%d", &numero_passageiros);

    for(y=0; y < numero_passageiros; y++){
        scanf("%d", &dado_classe);
        scanf("%1s", dado_sexo_c);
        scanf("%f", &dado_idade);
        scanf("%d", &dado_irmao);
        scanf("%d", &dado_pai);
        scanf("%1s", dado_embarque_c);
        scanf("%d", &dado_sobreviveu);

//        switch(tarefa){
//            case 0:
                if(dado_sobreviveu == 1){
                    hist_classe_sobreviveu[dado_classe-1]++;
                    hist_total_sobreviveu[dado_classe-1]++;
                }
                else{
                    hist_classe_morreu[dado_classe-1]++;
                    hist_total_morreu[dado_classe-1]++;
                }
//                break;
//            case 1:
                if(dado_sobreviveu == 1){
                    if(strcmp("m", dado_sexo_c) == 0){
                        hist_sexo_sobreviveu[0]++;
                        hist_total_sobreviveu[3]++;
                    }
                    else{
                        hist_sexo_sobreviveu[1]++;
                        hist_total_sobreviveu[4]++;
                    }

                }
                else{
                    if(strcmp("m", dado_sexo_c) == 0){
                        hist_sexo_morreu[0]++;
                        hist_total_morreu[3]++;
                    }
                    else{
                        hist_sexo_morreu[1]++;
                        hist_total_morreu[4]++;
                    }
                }
//                break;
//            case 2:
                //truncando idade maior que 99;
                if(dado_idade > 99)
                    dado_idade = 99;
                //trucando idades n�o inteiras para baixo;
                x = floor(dado_idade); //biblioteca math

                if(dado_sobreviveu == 1){
                    hist_idade_sobreviveu[x]++;
                    hist_total_sobreviveu[x+5]++;
                }
                else{
                    hist_idade_morreu[x]++;
                    hist_total_morreu[x+5]++;
                }
//                break;
//            case 3:
                if(dado_irmao > 9)
                    dado_irmao = 9;

                if(dado_sobreviveu == 1){
                    hist_irmao_sobreviveu[dado_irmao]++;
                    hist_total_sobreviveu[dado_irmao+105]++;

                }
                else{
                    hist_irmao_morreu[dado_irmao]++;
                    hist_total_morreu[dado_irmao+105]++;
                }
//                break;
//            case 4:
                if(dado_pai > 9)
                    dado_pai = 9;

                if(dado_sobreviveu == 1){
                    hist_pai_sobreviveu[dado_pai]++;
                    hist_total_sobreviveu[dado_pai+115]++;
                }
                else{
                    hist_pai_morreu[dado_pai]++;
                    hist_total_morreu[dado_pai+115]++;
                }

//                break;
//            case 5://parece ter um erro. moodle nao aceitou
                if(dado_sobreviveu == 1){
                    if(strcmp("S", dado_embarque_c) == 0){
                        hist_embarcou_sobreviveu[0]++;
                        hist_total_sobreviveu[125]++;
                    }

                    else if(strcmp("C", dado_embarque_c) == 0){
                        hist_embarcou_sobreviveu[1]++;
                        hist_total_sobreviveu[126]++;
                    }
                    else{
                        hist_embarcou_sobreviveu[2]++;
                        hist_total_sobreviveu[127]++;
                    }

                }
                else{
                    if(strcmp("S", dado_embarque_c) == 0){
                        hist_embarcou_morreu[0]++;
                        hist_total_morreu[125]++;
                    }
                    else if(strcmp("C", dado_embarque_c) == 0){
                        hist_embarcou_morreu[1]++;
                        hist_total_morreu[126]++;
                    }
                    else{
                        hist_embarcou_morreu[2]++;
                        hist_total_morreu[127]++;
                    }
                }
//                break;
        }
                //case6



    switch(tarefa){
        case 0:
            for(x=0; x<3; x++){
                printf("%d ", hist_classe_morreu[x]);
            } printf("\n");
            for(x=0; x<3; x++){
                printf("%d ", hist_classe_sobreviveu[x]);
            } printf("\n");
            break;

        case 1:
            for(x=0; x<2; x++){
                printf("%d ", hist_sexo_morreu[x]);
            } printf("\n");
            for(x=0; x<2; x++){
                printf("%d ", hist_sexo_sobreviveu[x]);
            } printf("\n");
            break;
        case 2:
            for(x=0; x<100; x++){
                printf("%d ", hist_idade_morreu[x]);
            } printf("\n");
            for(x=0; x<100; x++){
                printf("%d ", hist_idade_sobreviveu[x]);
            } printf("\n");
            break;
        case 3:
            for(x=0; x<10; x++){
                printf("%d ", hist_irmao_morreu[x]);
            } printf("\n");
            for(x=0; x<10; x++){
                printf("%d ", hist_irmao_sobreviveu[x]);
            } printf("\n");
            break;
        case 4:
            for(x=0; x<10; x++){
                printf("%d ", hist_pai_morreu[x]);
            } printf("\n");
            for(x=0; x<10; x++){
                printf("%d ", hist_pai_sobreviveu[x]);
            } printf("\n");
            break;
        case 5:
            for(x=0; x<3; x++){
                printf("%d ", hist_embarcou_morreu[x]);
            } printf("\n");
            for(x=0; x<3; x++){
                printf("%d ", hist_embarcou_morreu[x]);
            } printf("\n");
            break;
        case 6:
            for(x=0; x<128; x++){
                printf("%d ", hist_total_morreu[x]);
            } printf("\n");
            for(x=0; x<128; x++){
                printf("%d ", hist_total_sobreviveu[x]);
            } printf("\n");
            break;
        case 7:
             for(x=0; x<128; x++){
                    if(hist_total_morreu[x] > hist_total_sobreviveu[x])
                        hist_diferenca[x] = -1;
                    else if(hist_total_morreu[x] < hist_total_sobreviveu[x])
                        hist_diferenca[x] = 1;
                    else
                        hist_diferenca[x] = 0;
             }
            for(x=0; x<128; x++){
                printf("%d ", hist_diferenca[x]);
            } printf("\n");

    }

    return 0;
}
