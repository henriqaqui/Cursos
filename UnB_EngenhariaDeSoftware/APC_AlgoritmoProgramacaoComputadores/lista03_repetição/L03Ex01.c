/*
L03Ex01: Carga Pesada.
Codifique um software que apresente o peso total carregado por um caminh˜ao. Sabe-se que
esse caminh˜ao carrega 25 caixas, com pesos diferentes.
ENTRADA: Entradas do tipo double com os valores de peso de cada caixa.
SAÍDA: Uma saída ponto flutuante com precis˜ao de uma casa depois do ponto, sucedida quebra de linha.
*/
#include <stdio.h>
int main (){
    double peso_caixa, peso_total = 0;
    int num_caixa;

    for(num_caixa = 1; num_caixa < 26; num_caixa++){
        scanf("%lf", &peso_caixa);
        peso_total += peso_caixa;
    }
    printf("%.1lf\n", peso_total);
    return 0;
}

/*
USANDO O WHILE

#include <stdio.h>
int main (){
    double peso_caixa, peso_total = 0;
    int num_caixa = 1;

    while (num_caixa < 26){
        scanf ("%lf", &peso_caixa);
        peso_total += peso_caixa;
        num_caixa++;
    }
    printf("%.1lf\n", peso_total);
    return 0;
}
*/
