/*
L04Ex02: Números da ordem inversa a da leitura.
DESCRIÇÃO: Codifique um software que leia até 300 numeros inteiros positivos e os imprima em ordem
contrária a da leitura. Quando for fornecido um numero negativo, o program deve encerrar a leitura.
ENTRADA: Uma sequência de até 300 números do tipo int.
SAÍDA: Os números da sequência impressos na ordem contrária a da leitura separados por espaço em branco.
O último número deve ser sucedido de uma quebra de linha.
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
