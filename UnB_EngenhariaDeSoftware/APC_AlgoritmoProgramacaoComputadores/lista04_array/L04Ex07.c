/*
L04Ex07: N�meros fora de uma faixa.
DESCRI��O: Codifique um software que leia 135 n�meros inteiros. Ap�s a leitura dos 135,deve-se ler mais
dois n�meros inteiros, denominados LIMITE INFERIOR e LIMITE SUPERIOR.
Por fim, imprima seguindo a ordem de leitura, aqueles n�meros, dentre os 135 lidos, que estejam fora
da faixa definida pelos valores de LIMITE INFERIOR e LIMITE SUPERIOR (inclusive eles pr�prios).
Seu software deve garantir que o valor LIMITE SUPERIOR n�ao seja inferior ou igual ao valor de LIMITE INFERIOR.
ENTRADA: Uma sequ�ncia de 135 n�meros do tipo int, sucedida de um numero int referente a LIMITE INFERIOR
e outro n�mero int referente a LIMITE SUPERIOR
SA�DA: Os n�meros na sequ�ncia de leitura que estejam fora do intervalor definido por LIMITE INFERIOR
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
