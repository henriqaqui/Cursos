/*
L03Ex30: Convers�o para base decimal.
DESCRI��O: Escrever um programa que converta um n�mero inteiro positivo
de qualquer base (base menor a 10) para a base decimal.
Se numero n�o for compat�vel com sua base, deve aparecer a mensagem "ERROR" seguida
de quebra de linha.
*/

#include <stdio.h>

int main(){
    int numero, base, peso = 0, base_dez = 0, digito;

    scanf("%d", &numero);
    scanf("%d", &base);

    for(peso = 0; numero > 0 ;peso++){
        digito = numero % 10;
        numero /= 10;
        base_dez += digito * pow(base,peso);
        if(digito >= base){
            printf("ERROR\n");
            return 0;
        }
    }

    printf("%d\n", base_dez);
    return 0;
}
