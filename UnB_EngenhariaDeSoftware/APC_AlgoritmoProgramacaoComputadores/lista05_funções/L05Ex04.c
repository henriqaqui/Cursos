#include <stdio.h>
#include <stdlib.h>
struct cadastro{
    char nome[50];
    int idade;
};

void ordemCrescente(int tamanho, struct cadastro *cliente){
    int i, j;
    struct cadastro troca;


    for(i = 0; i < tamanho; i++){
        for(j = i+1; j < tamanho; j++){
            if(cliente[j].idade > cliente[i].idade){
                troca = cliente[i];
                cliente[i] = cliente[j];
                cliente[j] = troca;
            }
        }
    }

}


int main(){
    int qnt_clientes;
    int l;

    scanf("%d", &qnt_clientes);

    struct cadastro cliente[qnt_clientes];

    for(l = 0; l < qnt_clientes; l++){
        scanf("%s", cliente[l].nome);
        scanf("%d", &cliente[l].idade);
    }

    ordemCrescente(qnt_clientes, &cliente);

    for(l = 0; l < qnt_clientes; l++){
        printf("%s\n", cliente[l].nome);
    }


    return 0;
}
