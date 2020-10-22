#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int tarefa, numero_passageiros;
    int dado_classe, dado_irmao, dado_pai, dado_sobreviveu, dado_sexo, dado_embarque;
    float dado_idade;
    char dado_sexo_c[2], dado_embarque_c[2];
    int y, x; //controle
    int hist_classe_sobreviveu[3] = {0};
    int hist_classe_morreu[3] = {0};
    int hist_sexo_sobreviveu[2] = {0,0};
    int hist_sexo_morreu[2] = {0,0};
    int hist_idade_sobreviveu[100] = {0};
    int hist_idade_morreu[100] = {0};

    scanf("%d", &tarefa);
    scanf("%d", &numero_passageiros);

    for(y=0; y < numero_passageiros; y++){
        scanf("%d", &dado_classe);
        scanf("%s", &dado_sexo_c);
        scanf("%f", &dado_idade);
        scanf("%d", &dado_irmao);
        scanf("%d", &dado_pai);
        scanf("%s", &dado_embarque_c);
        scanf("%d", &dado_sobreviveu);

        switch(tarefa){
            case 0:
                if(dado_sobreviveu == 1)
                    hist_classe_sobreviveu[dado_classe-1]++;
                else
                    hist_classe_morreu[dado_classe-1]++;
                break;
            case 1:
                if(dado_sobreviveu == 1){
                    if(strcmp("m", dado_sexo_c) == 0)
                        hist_sexo_sobreviveu[0]++;
                    else
                        hist_sexo_sobreviveu[1]++;
                }
                else{
                    if(strcmp("m", dado_sexo_c) == 0)
                        hist_sexo_morreu[0]++;
                    else
                        hist_sexo_morreu[1]++;
                }
                break;
            case 2:
                //truncando idade maior que 99;
                if(dado_idade > 99)
                    dado_idade = 99;
                //trucando idades não inteiras para baixo;
                else
                    x = floor(dado_idade);

                if(dado_sobreviveu == 1)
                    hist_idade_sobreviveu[x]++;
                else
                    hist_idade_morreu[x]++;
                break;
        }
    }


    switch(tarefa){
        case 0:
            for(x=0; x<3; x++){
                printf("%d ", hist_classe_morreu[x]);
            } printf("\n");
            for(x=0; x<3; x++){
                printf("%d ", hist_classe_sobreviveu[x]);
            } printf("\n\n");
            break;

        case 1:
            for(x=0; x<2; x++){
                printf("%d ", hist_sexo_morreu[x]);
            } printf("\n");
            for(x=0; x<2; x++){
                printf("%d ", hist_sexo_sobreviveu[x]);
            } printf("\n\n");
            break;
        case 2:
            for(x=0; x<100; x++){
                printf("%d ", hist_idade_morreu[x]);
            } printf("\n");
            for(x=0; x<100; x++){
                printf("%d ", hist_idade_sobreviveu[x]);
            } printf("\n\n");
            break;
    }

    return 0;
}
