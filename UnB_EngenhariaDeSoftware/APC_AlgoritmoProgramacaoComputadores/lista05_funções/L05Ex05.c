#include <stdio.h>
#include <stdlib.h>
struct lista{
    char presente[50];
};

void trocaPresente(struct lista *presentes, int j, int i){
    struct lista troca;

    troca = presentes[j];
    presentes[j] = presentes[i];
    presentes[i] = troca;
}


int main(){
    int qnt_casa, qnt_troca;
    int y, j, i;;

    scanf("%d", &qnt_casa);

    struct lista presentes[qnt_casa];

    for(y = 0; y < qnt_casa; y++){
        scanf("%s", presentes[y].presente);
    }

    scanf("%d", &qnt_troca);

    for(y = 0; y < qnt_troca; y++){
        scanf("%d", &j);
        scanf("%d", &i);
        trocaPresente(&presentes, j, i);
    }

    for(y = 0; y < qnt_casa; y++){
        printf("%s\n", presentes[y].presente);
    }





    return 0;
}
