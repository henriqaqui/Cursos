#include <stdio.h>
#include <stdlib.h>

int main(){
    int tarefa, numero_passageiros;
    int dado_classe, dado_irmao, dado_pai, dado_sobreviveu, dado_sexo, dado_embarque;
    float dado_idade;
    char dado_sexo_c, dado_embarque_c;
    int y, x; //controle
    int hist_classe_sobreviveu[3] = {0};
    int hist_classe_morreu[3] = {0};

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

        if(dado_sobreviveu == 1)
            hist_classe_sobreviveu[dado_classe-1]++;
        else
            hist_classe_morreu[dado_classe-1]++;
    }

    switch(tarefa){
        case 0:
            for(x=0; x<3; x++){
                printf("%d ", hist_classe_morreu[x]);
            } printf("\n");
            for(x=0; x<3; x++){
                printf("%d ", hist_classe_sobreviveu[x]);
            } printf("\n\n");
    }

    return 0;
}
