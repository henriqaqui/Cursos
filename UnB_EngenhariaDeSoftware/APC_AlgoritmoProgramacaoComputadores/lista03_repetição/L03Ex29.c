/*
L03Ex29: Números primos entre N fatorial.
Faça um programa que receba um número inteiro (N) e forneça todos os números primos entre
1 e N! (N fatorial). Caso seja informado um número menor que zero, deve ser solicitado o número novamente.
ENTRADA: Uma entrada do tipo long int.
SAÍDA: Saída do tipo long int com um espac¸o nulo na frente. Caso n˜ao tenha nenhum número primo na
saída, deve ser fornecida a seguinte mensagem: ”NENHUM PRIMO”. O final da impress˜ao deve
ser procedida de uma quebra de linha.
*/

#include <stdio.h>

int main(){
    int fatorial = 1, numero = 0;
    int n, primo, divisor;

    do{
        scanf("%li", &n);
    } while (n < 0);

    while (n > 0){
        fatorial *= n;
        n--;
    }

    if (fatorial == 0 || fatorial == 1)
        printf("NENHUM PRIMO\n");
    else {
        while(numero < fatorial){
            primo = 1;

            for(divisor = 3; divisor <= sqrt(numero); divisor+=2){
                if (numero % divisor == 0)
                    primo = 0;
            }

            if ((numero == 1 || numero == 0) || (numero % 2 == 0 && numero != 2))
              primo = 0;
            if (primo == 1)
                printf("%li ", numero);

            numero++;
        }
        printf("\n");
    }

    return 0;
}
