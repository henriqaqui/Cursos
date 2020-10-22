/*
L04Ex05: Soma dos números abaixo de limite.
DESCRIÇÃO: Codifique um software que leia até 106 números inteiros diferentes de 0. Assim que o valor 0
for fornecido ou após a leitura do 106º número, deve-se ler mais um número inteiro, denominado LIMITE.
Por fim, imprima a soma daqueles números, dentre os 106 lidos, cujo valor n˜ao supere o valor de LIMITE.
ENTRADA: Uma sequência de até 106 números do tipo int, sucedida de um número int referente a LIMITE.
SAÍDA: A soma dos números, dentre os 106 lidos, cujo valor n˜ao supere o valor de LIMITE.
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
