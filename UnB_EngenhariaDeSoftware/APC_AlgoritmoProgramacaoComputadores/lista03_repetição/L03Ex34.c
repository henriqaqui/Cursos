#include <stdio.h>
#include <string.h> //necessário para strcpy

int main(){
    int tarefa, passageiro, passageiro_contagem;
    float dado_sexo, dado_embarcou,dado_classe, dado_idade, dado_irmao, dado_pai;
    char dado_sexo_s[2], dado_embarcou_s[2];
    float soma_sexo = 0, soma_embarcou = 0, soma_classe = 0, soma_idade = 0, soma_irmao = 0, soma_pai = 0;

    scanf("%d", &tarefa);
    scanf("%d", &passageiro);

    passageiro_contagem = passageiro;

    while(passageiro_contagem > 0){
        scanf("%f", &dado_classe);
        scanf("%s", &dado_sexo_s);
        scanf("%f", &dado_idade);
        scanf("%f", &dado_irmao);
        scanf("%f", &dado_pai);
        scanf("%s", &dado_embarcou_s);

        switch (tarefa){
        case 0:
            if (strcmp(dado_sexo_s,"f") == 0)
                dado_sexo = 1;
            else if (strcmp (dado_sexo_s, "m") == 0)
                dado_sexo = 0;

            if (strcmp (dado_embarcou_s, "S") == 0)
                dado_embarcou = 0;
            else if (strcmp (dado_embarcou_s, "C") == 0)
                dado_embarcou = 1;
            else if (strcmp (dado_embarcou_s, "Q") == 0)
                dado_embarcou = 2;

            printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", dado_classe, dado_sexo, dado_idade, dado_irmao, dado_pai, dado_embarcou);
            break;
        case 1:
            if (strcmp(dado_sexo_s,"f") == 0)
                dado_sexo = 1;
            else if (strcmp (dado_sexo_s, "m") == 0)
                dado_sexo = 0;

            if ((dado_idade > 15 && dado_idade <= 45) || (dado_classe > 1 && dado_sexo == 1))
                printf("Morreu\n");
            else
                printf("Sobreviveu\n");
            break;
        case 2:
             if (strcmp(dado_sexo_s,"f") == 0)
                dado_sexo = 1;
            else if (strcmp (dado_sexo_s, "m") == 0)
                dado_sexo = 0;

            if (strcmp (dado_embarcou_s, "S") == 0)
                dado_embarcou = 0;
            else if (strcmp (dado_embarcou_s, "C") == 0)
                dado_embarcou = 1;
            else if (strcmp (dado_embarcou_s, "Q") == 0)
                dado_embarcou = 2;

            soma_classe += dado_classe;
            soma_sexo += dado_sexo;
            soma_idade += dado_idade;
            soma_irmao += dado_irmao;
            soma_pai += dado_pai;
            soma_embarcou += dado_embarcou;

            if (passageiro_contagem == 1)
                printf("%.3f %.3f %.3f %.3f %.3f %.3f\n", soma_classe/passageiro, soma_sexo/passageiro, soma_idade/passageiro, soma_irmao/passageiro, soma_pai/passageiro, soma_embarcou/passageiro);

            break;

        }
        passageiro_contagem--;
    }
    return 0;
}
