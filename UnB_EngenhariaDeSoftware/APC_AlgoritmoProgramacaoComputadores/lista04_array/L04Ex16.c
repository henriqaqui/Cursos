/*
L04Ex16: Strings com Vogais Trocadas.
DESCRIÇÃO: Codifique um software que leia uma String com até 109 caracteres e imprima a mesma String,
substituindo todas vogais n˜ao acentuadas por a, depois por e, depois por i, por o e depois u.
ENTRADA: Uma string com até 109 caracteres.
SAÍDA: Uma saída contendo cinco strings, sendo que cada uma delas apresentara apenas um tipo de vogal.
*/
#include <stdio.h>

int main(){
    char texto[109], vogal[] = {"aeiou"};
    int contagem, contagem_vogais;

    scanf("%s", texto);

    for(contagem_vogais = 0;  contagem_vogais < 5; contagem_vogais++){
        for(contagem = 0; texto[contagem] != '/0' && contagem < 109; contagem++){
            if(texto[contagem] == 'a' || texto[contagem] == 'e' || texto[contagem] == 'i' || texto[contagem] == 'o' || texto[contagem] == 'u')
                texto[contagem] = vogal[contagem_vogais];
        }
        printf("%s\n", texto);
    }

    printf("\n");
    return 0;
}

