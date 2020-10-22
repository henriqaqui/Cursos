/*
L03Ex08: Inverso.
DESCRI��O: Codifique um software que leia um n�mero inteiro e crie um novo n�mero em ordem inversa
do fornecido. Por exemplo, se a entrada for 7395 a sa�da ser� 5937. Em caso de valores negativos,
deve-se preservar o sinal.
ENTRADA: Uma entrada int.
SA�DA: Uma sa�da contendo o valor inverso, seguido de quebra de linha.
*/

#include <stdio.h>

int main(){
    int num, num_resto;

    scanf("%d", &num);

    if (num >= 0){
        do {
            num_resto = num % 10;
            printf("%d%", num_resto);
            num = num / 10;
        }   while (num != 0);
    }   else {
            do {
                num_resto = num % 10;
                printf("%d%", num_resto);
                num = num / 10;
                    if (num < 0)
                        num = num * -1; //assim o sinal "-" n�o se repete no printf.
            }   while (num != 0);
        }
    printf("\n");
return 0;
}

/*
OP��O PARA O ELSE (me parece melhor):

else {
    printf("-");
    num = num * -1;
    do {
        num_resto = num % 10;
        printf("%d%", num_resto);
        num = num / 10;
    }   while (num != 0);
}
*/
