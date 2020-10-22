#include <stdio.h>
#include <stdlib.h>

char *extraiSobrenome(char nome[30]){
    char *sobrenome;
    int x;

    for(x = 0; nome[x] != '_'; x++){
    }
    nome[x] = '\0';// coloquei depois porque notei que o nome estava com a sobrenome;
    x++;
    sobrenome = &nome[x];
    printf("Nome&: %p\nSobrenome&: %p\n",&nome, &sobrenome);
    printf("Nome*: %p\nSobrenome*: %p\n",*nome, *sobrenome);
    printf("Nome: %p\nSobrenome: %p\n\n",nome, sobrenome);




    return sobrenome;
}


int main(){
    char nome[30];
    char *sobrenome;
    scanf("%s", nome);
    sobrenome = extraiSobrenome(nome);
    printf("Nome\n%s\nSobrenome\n%s\n\n",nome, sobrenome);
    printf("Nome&: %p\nSobrenome&: %p\n",&nome, &sobrenome);
    printf("Nome*: %p\nSobrenome*: %p\n",*nome, *sobrenome);
    printf("Nome: %p\nSobrenome: %p\n\n",nome, sobrenome);
    return 0;
}


