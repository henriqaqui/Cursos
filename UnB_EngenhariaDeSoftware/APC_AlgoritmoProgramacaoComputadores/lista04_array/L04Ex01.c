/*
L04Ex01 N�meros da ordem inversa a da leitura
Codifique um software que leia 200 numeros inteiros e os imprima em ordem contr�ria a da leitura.
ENTRADA: Uma sequ�ncia de 200 n�meros do tipo int.
SA�DA: Os n�meros da sequ�ncia impressos na ordem contr�ria a da leitura separados por espa�o em branco.
O �ltimo n�mero deve ser sucedido de uma quebra de linha.
*/
#include <stdio.h>

int main(){
    int numero[200], contagem;

    for(contagem = 0; contagem < 200; contagem++){
        scanf("%d", &numero[contagem]);
    }
    for(contagem = 199; contagem >= 0; contagem--){
        printf("%d ", numero[contagem]);
    }
    printf("\n");

    return 0;
}
/*
USANDO O DO WHILE

int main(){
    int numero [200], contagem = 0;

    do{
        scanf("%d", &numero[contagem]);
        contagem++;
    }while(contagem < 200);

    do{
        contagem--;
        printf("%d ", numero[contagem]);
    }while (contagem > 0);
    printf("\n");

    return 0;
}
*/
