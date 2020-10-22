/*
L04Ex15: Strings intercaladas.
DESCRIÇÃO: Codifique um software que leia duas strings de até 100 caracteres cada e imprima uma string intercalando as letras das duas strings.
Se uma for menor que a outra, deve-se prosseguir imprimindo a maior.
ENTRADA: Uma string com até 100 caracteres.
SAÍDA: Uma saída string contendo as duas strings intercaladas.
*/
#include <stdio.h>

int main(){
    char string_a[100], string_b[100];
    int numero_caractere_a, numero_caractere_b, contagem_final;

    scanf("%s", string_a);
    scanf("%s", string_b);

    for(numero_caractere_a = 0; numero_caractere_a < 100; numero_caractere_a++){
        if(string_a[numero_caractere_a] == '\0')
            break;
    }
    for(numero_caractere_b = 0; numero_caractere_b < 100; numero_caractere_b++){
        if(string_b[numero_caractere_b] == '\0')
            break;
    }

    for(contagem_final = 0;numero_caractere_a >= 1 || numero_caractere_b >= 1; numero_caractere_a--, numero_caractere_b--, contagem_final++){
        if(numero_caractere_a >= 1)
            printf("%c", string_a[contagem_final]);
        if(numero_caractere_b >= 1)
            printf("%c", string_b[contagem_final]);
    }
    printf("\n");
    return 0;
}

