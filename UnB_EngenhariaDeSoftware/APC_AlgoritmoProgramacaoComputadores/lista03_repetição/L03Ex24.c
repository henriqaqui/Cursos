/*
L03Ex24: Soma dos termos da serie ninja.
DESCRI��O: Fa�a um programa que mostre a soma dos N primeiros termos da s�rie NINJA, onde N � um
n�mero inteiro informado pelo usu�rio. Considere N um n�mero que seja m�ltiplo de 3 (tr�s).
    S�rie NINJA: 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768, ...
    Ou seja, a s�rie � iniciada pelos n�meros 2, 7, 3, sendo esses valores multiplicados por,
    respectivamente, 2, 3 e 4 para formar o novo conjunto de tr�s numeros, e assim por diante.
ENTRADA: Uma entrada do tipo long int.
SA�DA: Uma sa�da do tipo long int. Caso n�ao seja fornecida uma entrada que seja m�ltiplo de 3 (tr�s),
deve ser fornecida a seguinte sa�da: �SEM SOMA�. A sa�da deve ser procedida de uma quebra de linha.
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
