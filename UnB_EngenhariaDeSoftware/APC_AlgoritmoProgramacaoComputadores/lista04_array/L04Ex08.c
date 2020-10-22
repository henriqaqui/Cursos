/*
L04Ex08: Conversão de Decimal para Hexadecimal
DESCRIÇÃO: Codifique um software que leia um valor inteiro na base decimal e o imprima na base hexadecimal.
ENTRADA: Uma entrada do tipo inteiro.
SAÍDA: Uma saída que informe o valor hexadecimal.
*/
#include <stdio.h>

int main(){
    int numero, contagem = 0;
    char numero_hexa[contagem];

    scanf("%d", &numero);

    while(numero > 0){
        numero_hexa[contagem] = numero % 16;
        switch (numero_hexa[contagem]){
        case 0:
            numero_hexa[contagem] = '0';
            break;
        case 1:
            numero_hexa[contagem] = '1';
            break;
        case 2:
            numero_hexa[contagem] = '2';
            break;
        case 3:
            numero_hexa[contagem] = '3';
            break;
        case 4:
            numero_hexa[contagem] = '4';
            break;
        case 5:
            numero_hexa[contagem] = '5';
            break;
        case 6:
            numero_hexa[contagem] = '6';
            break;
        case 7:
            numero_hexa[contagem] = '7';
            break;
        case 8:
            numero_hexa[contagem] = '8';
            break;
        case 9:
            numero_hexa[contagem] = '9';
            break;
        case 10:
            numero_hexa[contagem] = 'A';
            break;
        case 11:
            numero_hexa[contagem] = 'B';
            break;
        case 12:
            numero_hexa[contagem] = 'C';
            break;
        case 13:
            numero_hexa[contagem] = 'D';
            break;
        case 14:
            numero_hexa[contagem] = 'E';
            break;
        case 15:
            numero_hexa[contagem] = 'F';
            break;
        }
        contagem++;
        numero /= 16;
    }
    contagem--;
    for(;contagem >= 0; contagem--){
        printf("%c", numero_hexa[contagem]);
    }
    printf("\n");
    return 0;
}

