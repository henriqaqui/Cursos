/*
L04Ex02: N�meros da ordem inversa a da leitura.
DESCRI��O: Codifique um software que leia at� 300 numeros inteiros positivos e os imprima em ordem
contr�ria a da leitura. Quando for fornecido um numero negativo, o program deve encerrar a leitura.
ENTRADA: Uma sequ�ncia de at� 300 n�meros do tipo int.
SA�DA: Os n�meros da sequ�ncia impressos na ordem contr�ria a da leitura separados por espa�o em branco.
O �ltimo n�mero deve ser sucedido de uma quebra de linha.
*/
#include <stdio.h>
//USANDO DO WHILE
int main(){
    int numero [300], contagem = 0;

    do{
        scanf("%d", &numero[contagem]);
        contagem++;
    }while(contagem < 300 && numero[contagem - 1] > 0);

    if (numero[contagem - 1 > 0])
        contagem--;

    do{
        contagem--;
        printf("%d ", numero[contagem]);
    }while (contagem > 0);

    printf("\n");
    return 0;
}
/*
//USANDO WHILE
int main(){
    int numero[300], contagem = 0;

    scanf("%d", &numero[contagem]);

    while(numero[contagem] >= 0 && contagem < 299){
        contagem++;
        scanf("%d ", &numero[contagem]);
    }
    if (numero[contagem] < 0)
        contagem--;
    while(contagem >=0){
        printf("%d ", numero[contagem]);
        contagem--;
    }
    printf("\n");
    return 0;
}

//USANDO FOR
int main(){
    int numero[300], contagem = 0;

    scanf("%d", &numero[contagem]);

    for(contagem = 1; numero[contagem - 1] >= 0 && contagem < 300; contagem++){
            scanf("%d", &numero[contagem]);
    }

    if(numero[contagem - 1] <0)
        contagem--;

    for(contagem--; contagem >= 0; contagem--){
        printf("%d ", numero[contagem]);
    }
    printf("\n");
    return 0;
}
*/
