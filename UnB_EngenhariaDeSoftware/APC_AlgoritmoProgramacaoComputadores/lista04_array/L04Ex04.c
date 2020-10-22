/*
L04Ex04: Números acima de limite.
DESCRIÇÃO: Codifique um software que leia até 87 números inteiros diferentes de 0. Assim que o valor 0
for fornecido ou após a leitura do 87º número, deve-se ler mais um número inteiro, denominado LIMITE.
Por fim, imprima seguindo a ordem de leitura, aqueles números, dentre os 87 lidos, cujo valor supere o valor de LIMITE.
ENTRADA: Uma sequência de até 87 números do tipo int, sucedida de um numero int referente a LIMITE.
SAÍDA: Uma sequência de números que superem o valor de LIMITE, mostrados na mesma sequência de leitura.
*/
#include <stdio.h>

int main(){
    int numero [87], contagem = 0, limite, contagem_limite;

    scanf("%d", &numero[contagem]);

    for(; contagem < 86 && numero[contagem] != 0;){
        contagem++;
        scanf("%d", &numero[contagem]);
    }

    scanf("%d", &limite);

    if (numero[contagem] == 0)
        contagem_limite = contagem;
    else
        contagem_limite = contagem + 1;

    for(contagem = 0; contagem < contagem_limite; contagem++){
        if(numero[contagem] > limite)
            printf("%d ", numero[contagem]);
    }
    printf("\n");

    return 0;
}
/*
//USANDO DO WHILE
int main(){
    int numero [87], contagem = 0, limite, contagem_limite;

    do{
        scanf("%d", &numero[contagem]);
        contagem++;
    }while(contagem < 87 && numero[contagem - 1] != 0);

    scanf("%d", &limite);

    contagem_limite = contagem - 1;
    contagem = 0;

    do{
        if(numero[contagem] > limite)
            printf("%d ", numero[contagem]);
        contagem++;
    }while (contagem <= contagem_limite);

    printf("\n");

    return 0;
}
*/
