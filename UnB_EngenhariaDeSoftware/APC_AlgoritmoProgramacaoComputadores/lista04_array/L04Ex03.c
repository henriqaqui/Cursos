/*
L04Ex03: Números até limite.
DESCRIÇÃO: Codifique um software que leia 150 números inteiros. Após a leitura dos 150, deve-se ler mais
um número inteiro, denominado LIMITE. Por fim, imprima seguindo a ordem de leitura, aqueles
números, dentre os 150 lidos, cujo valor n˜ao supere LIMITE.
ENTRADA: Uma sequência de 150 números do tipo int, sucedida de um numero int referente a LIMITE
SAÍDA: Uma sequência de números que n˜ao superem o valor de LIMITE, mostrados na mesma sequência de leitura.
*/
#include <stdio.h>

int main(){
    int numero [150], contagem = 0, limite;

    for(contagem = 0; contagem < 150; contagem++){
        scanf("%d", &numero[contagem]);
    }

    scanf("%d", &limite);

    for(contagem = 0; contagem < 150; contagem++){
        if(numero[contagem] <= limite)
            printf("%d ", numero[contagem]);
    }
    printf("\n");

    return 0;
}

/*
// USANDO DO WHILE
int main(){
    int numero [150], contagem = 0, limite;

    do{
        scanf("%d", &numero[contagem]);
        contagem++;
    }while(contagem < 150);

    scanf("%d", &limite);

    contagem = 0;

    do{
        if(numero[contagem] <= limite)
            printf("%d ", numero[contagem]);
        contagem++;
    }while (contagem < 150);

    printf("\n");

    return 0;
}
*/
