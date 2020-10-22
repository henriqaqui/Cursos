/*
L04Ex05: Soma dos n�meros abaixo de limite.
DESCRI��O: Codifique um software que leia at� 106 n�meros inteiros diferentes de 0. Assim que o valor 0
for fornecido ou ap�s a leitura do 106� n�mero, deve-se ler mais um n�mero inteiro, denominado LIMITE.
Por fim, imprima a soma daqueles n�meros, dentre os 106 lidos, cujo valor n�ao supere o valor de LIMITE.
ENTRADA: Uma sequ�ncia de at� 106 n�meros do tipo int, sucedida de um n�mero int referente a LIMITE.
SA�DA: A soma dos n�meros, dentre os 106 lidos, cujo valor n�ao supere o valor de LIMITE.
*/
#include <stdio.h>

int main(){
    int numero [106], contagem = 0, limite, contagem_limite, soma = 0;

    do{
        scanf("%d", &numero[contagem]);
        contagem++;
    }while(contagem < 106 && numero[contagem - 1] != 0);

    scanf("%d", &limite);

    contagem_limite = contagem - 1;
    contagem = 0;

    do{
        if(numero[contagem] <= limite)
            soma += numero[contagem];
        contagem++;
    }while (contagem <= contagem_limite);

   printf("%d\n", soma);

    return 0;
}
