/// UNIVERSIDADE DE BRASÍLIA - UnB
/// FACULDADE DE ENGENHARIAS GAMA - FGA
//  ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES
//  PRÁTICA 3.
//
//  Copyright © 2018 Nilton Correia da Silva. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define Size 30

// ########### NÃO ALTERAR AS ESTRUTURAS DE DADOS ABAIXO #############
typedef struct Infos
{
    char Nome[15];
    char Sobrenome[30];
    int Idade;
} TInfos;

typedef struct Assinante
{
    int Codigo;
    TInfos Cadastro;
} TAssinante;

// #################### FIM DAS ESTRUTURAS DE DADOS #################




//********* VOCÊ DEVE COMPLETAR O CORPO DA FUNÇÃO ABAIXO.  ***********
// Esta função deve retornar a quantidade de Assinantes incluídos
// na variável pAss

int LeAssinantes(TAssinante pAss[Size])
{
//COLOQUE SEU CÓDIGO AQUI.

}



// ########### NÃO ALTERAR DAQUI PARA BAIXO ##########################

//Subrotinas de saídas de dados:
void MostraInfo(TInfos *pInfo)
{
    printf(" %s",pInfo->Nome);
    printf(" %s",pInfo->Sobrenome);
    printf(" %d",pInfo->Idade);
    return;
}

void MostraAssinantes(TAssinante pAss[Size], int pQtdeAss)
{
    int pind;
    for(pind=0;pind<pQtdeAss;pind++){
        printf("\n%d", pAss[pind].Codigo);
        MostraInfo(&pAss[pind].Cadastro);
    }
    return;
}

int main()
{
    TAssinante Assinantes[Size];
    int QtdeAssinantes;
    
    //Entrada e Saída de Assinantes
    QtdeAssinantes = LeAssinantes(Assinantes);
    MostraAssinantes(Assinantes, QtdeAssinantes);
    return 0;
}
