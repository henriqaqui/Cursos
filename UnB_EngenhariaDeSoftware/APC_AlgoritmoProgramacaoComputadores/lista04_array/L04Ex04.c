/*
L04Ex04: N�meros acima de limite.
DESCRI��O: Codifique um software que leia at� 87 n�meros inteiros diferentes de 0. Assim que o valor 0
for fornecido ou ap�s a leitura do 87� n�mero, deve-se ler mais um n�mero inteiro, denominado LIMITE.
Por fim, imprima seguindo a ordem de leitura, aqueles n�meros, dentre os 87 lidos, cujo valor supere o valor de LIMITE.
ENTRADA: Uma sequ�ncia de at� 87 n�meros do tipo int, sucedida de um numero int referente a LIMITE.
SA�DA: Uma sequ�ncia de n�meros que superem o valor de LIMITE, mostrados na mesma sequ�ncia de leitura.
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
