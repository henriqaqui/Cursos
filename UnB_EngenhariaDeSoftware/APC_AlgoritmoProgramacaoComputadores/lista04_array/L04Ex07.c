/*
L04Ex07: Números fora de uma faixa.
DESCRIÇÃO: Codifique um software que leia 135 números inteiros. Após a leitura dos 135,deve-se ler mais
dois números inteiros, denominados LIMITE INFERIOR e LIMITE SUPERIOR.
Por fim, imprima seguindo a ordem de leitura, aqueles números, dentre os 135 lidos, que estejam fora
da faixa definida pelos valores de LIMITE INFERIOR e LIMITE SUPERIOR (inclusive eles próprios).
Seu software deve garantir que o valor LIMITE SUPERIOR n˜ao seja inferior ou igual ao valor de LIMITE INFERIOR.
ENTRADA: Uma sequência de 135 números do tipo int, sucedida de um numero int referente a LIMITE INFERIOR
e outro número int referente a LIMITE SUPERIOR
SAÍDA: Os números na sequência de leitura que estejam fora do intervalor definido por LIMITE INFERIOR
e LIMITE SUPERIOR.
*/
#include <stdio.h>

int main(){
    int numero[135], contagem, limite_superior, limite_inferior;

    for(contagem = 0; contagem < 135; contagem++){
        scanf("%d", &numero[contagem]);
    }
    scanf("%d %d", &limite_inferior, &limite_superior);
        while(limite_superior <= limite_inferior){
            scanf("%d", &limite_superior);
        }

    for(contagem = 0; contagem < 135; contagem++){
        if(numero[contagem] < limite_inferior || numero[contagem] > limite_superior)
            printf("%d ", numero[contagem]);
    }
    printf("\n");
    return 0;
}
