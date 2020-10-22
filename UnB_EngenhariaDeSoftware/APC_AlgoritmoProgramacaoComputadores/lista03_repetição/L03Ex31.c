/*
L03Ex31: Crescimento Populacional.
DESCRIÇÃO: Pedro quer resolver um problema interessante. Dadas as informações de população e a
taxa de crescimento de duas cidades quaisquer (A e B), ele gostaria de saber quantos anos levará
para que a cidade menor (sempre é a cidade A) ultrapasse a cidade B em população. Claro que ele quer saber
apenas para as cidades cuja taxa de crescimento da cidade A é maior do que a taxa de crescimento da cidade B,
portanto, previamente já separou para você apenas os casos de teste que tem a taxa de crescimento
maior para a cidade A. Sua tarefa é construir um programa que apresente o tempo em anos para cada caso de teste.
Porém, em alguns casos o tempo pode ser muito grande, e Pedro não se interessa em saber exatamente
o tempo para estes casos. Basta que você informe, nesta situação, a mensagem "Mais de 1 seculo.".
ENTRADA: A primeira linha da entrada contém um único inteiro T, indicando o número de casos de teste (1≤ T ≤3000).
Cada caso de teste contém 4 entradas: dois inteiros PA e PB (100≤ PA ≤1000000, PA < PB ≤1000000) indicando
respectivamente a população de A e B, e dois valores G1 e G2 (0.1 ≤ G1 ≤ 10.0, 0.0 ≤G2 ≤ 10.0, G2 < G1)
com um digito após o ponto decimal cada, indicando respectivamente o crescimento populacional de A e B (em percentual).
Atenção: A população é sempre um valor inteiro, portanto, um crescimento de 2.5 % sobre uma população de 100 pessoas
resultará em 102 pessoas, e não 102.5 pessoas, enquanto um crescimento de 2.5% sobre uma população de
1000 pessoas resultará em 1025 pessoas.
SAÍDA: Imprima, para cada caso de teste, quantos anos levará para que a cidade A ultrapasse a cidade B em número
de habitantes. Obs.: se o tempo for mais do que 100 anos o programa deve apresentar a mensagem: "Mais de 1 seculo.".
*/

#include <stdio.h>

int main(){
    int populacao_a, populacao_b, numero_cidades, anos;
    double taxa_a, taxa_b;

    scanf("%d", &numero_cidades);

    for(anos = 0 ; numero_cidades > 0; numero_cidades--){
        scanf("%d", &populacao_a);
        scanf("%d", &populacao_b);
        scanf("%lf", &taxa_a);
        scanf("%lf", &taxa_b);

        while (populacao_b >= populacao_a){
            populacao_a += populacao_a * (taxa_a/100);
            populacao_b += populacao_b * (taxa_b/100);

            anos++;
            if (anos > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (anos <= 100)
            printf("%d anos.\n", anos);

        anos = 0;
    }
    return 0;
}
