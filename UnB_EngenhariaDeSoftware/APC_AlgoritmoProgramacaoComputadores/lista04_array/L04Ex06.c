/*
L04Ex06: Média dos números abaixo de limite
DESCRIÇÃO: Codifique um software que leia 53 números inteiros. Após a leitura do 53º numero, deve-se
ler mais um número inteiro, denominado LIMITE. Por fim, imprima a média daqueles números,
dentre os 53 lidos, cujo valor n˜ao supere o valor de LIMITE.
ENTRADA: Uma sequência de 53 números do tipo int, sucedida de um número int referente a LIMITE
SAÍDA: A média dos n´umeros, dentre os 53 lidos, cujo valor n˜ao supere o valor de LIMITE.
Esse valor deve possuir precis˜ao de uma casa após o ponto.
*/
#include <stdio.h>

int main(){
    int numero[53], contagem, limite, soma;
    double media;

    for(contagem = 0; contagem < 53; contagem++){
        scanf("%d", &numero[contagem]);
    }

    scanf("%d", &limite);

    for(contagem = 0, soma = 0, media = 0; contagem < 53; contagem++){
        if (numero[contagem] <= limite){
            soma += numero[contagem];
            media++;
        }
    }
    media = soma / media;

    printf("%.1lf\n", media);
    return 0;
}
