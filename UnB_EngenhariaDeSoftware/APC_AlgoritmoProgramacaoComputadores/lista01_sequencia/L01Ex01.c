/*
L01Ex01: Leitura de Quatro Inteiros.
DESCRIÇÃO: Codifique um software que receba quatro números inteiros, calcule e mostre a soma desses números.
ENTRADA: Quatro entradas do tipo inteiro.
SAÍDA: Uma saída do tipo inteiro.
*/

#include <stdio.h>
int main(){
    int num_1, num_2, num_3, num_4, soma;

    scanf("%d", &num_1);
    scanf("%d", &num_2);
    scanf("%d", &num_3);
    scanf("%d", &num_4);

    soma = (num_1 + num_2 + num_3 + num_4);

    printf("%d\n", soma);
    return 0;
}

/*
//Com uso de função

#include <stdio.h>

int somar(int a, int b, int c, int d){
    return a + b + c + d;
}

int main(){
    int num_1, num_2, num_3, num_4, soma;

    scanf("%d", &num_1);
    scanf("%d", &num_2);
    scanf("%d", &num_3);
    scanf("%d", &num_4);

    printf("%d\n", somar(num_1, num_2, num_3, num_4));

    return 0;
}

*/