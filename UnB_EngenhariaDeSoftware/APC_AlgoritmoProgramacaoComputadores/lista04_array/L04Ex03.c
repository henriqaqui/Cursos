/*
L04Ex03: N�meros at� limite.
DESCRI��O: Codifique um software que leia 150 n�meros inteiros. Ap�s a leitura dos 150, deve-se ler mais
um n�mero inteiro, denominado LIMITE. Por fim, imprima seguindo a ordem de leitura, aqueles
n�meros, dentre os 150 lidos, cujo valor n�ao supere LIMITE.
ENTRADA: Uma sequ�ncia de 150 n�meros do tipo int, sucedida de um numero int referente a LIMITE
SA�DA: Uma sequ�ncia de n�meros que n�ao superem o valor de LIMITE, mostrados na mesma sequ�ncia de leitura.
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
