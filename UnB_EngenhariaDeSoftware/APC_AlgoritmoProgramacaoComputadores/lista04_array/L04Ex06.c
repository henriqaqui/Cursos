/*
L04Ex06: M�dia dos n�meros abaixo de limite
DESCRI��O: Codifique um software que leia 53 n�meros inteiros. Ap�s a leitura do 53� numero, deve-se
ler mais um n�mero inteiro, denominado LIMITE. Por fim, imprima a m�dia daqueles n�meros,
dentre os 53 lidos, cujo valor n�ao supere o valor de LIMITE.
ENTRADA: Uma sequ�ncia de 53 n�meros do tipo int, sucedida de um n�mero int referente a LIMITE
SA�DA: A m�dia dos n�umeros, dentre os 53 lidos, cujo valor n�ao supere o valor de LIMITE.
Esse valor deve possuir precis�ao de uma casa ap�s o ponto.
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
