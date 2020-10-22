/*
L03Ex24: Soma dos termos da serie ninja.
DESCRIÇÃO: Faça um programa que mostre a soma dos N primeiros termos da série NINJA, onde N é um
número inteiro informado pelo usuário. Considere N um número que seja múltiplo de 3 (três).
    Série NINJA: 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768, ...
    Ou seja, a série é iniciada pelos números 2, 7, 3, sendo esses valores multiplicados por,
    respectivamente, 2, 3 e 4 para formar o novo conjunto de três numeros, e assim por diante.
ENTRADA: Uma entrada do tipo long int.
SAÍDA: Uma saída do tipo long int. Caso n˜ao seja fornecida uma entrada que seja múltiplo de 3 (três),
deve ser fornecida a seguinte saída: ”SEM SOMA”. A saída deve ser procedida de uma quebra de linha.
*/
#include <stdio.h>

int main(){

    long int repeticao, soma, num2 = 2, num7 = 7, num3 = 3;

    scanf("%li", &repeticao);

    if (repeticao % 3 == 0 && repeticao != 0){

        repeticao /= 3;

        for(soma = 0; repeticao > 0; repeticao--){
          soma += num2 + num7 + num3;

          num2 *= 2;
          num7 *= 3;
          num3 *= 4;
         }

        printf("%li\n", soma);

    } else
        printf("SEM SOMA\n");

    return 0;
}
