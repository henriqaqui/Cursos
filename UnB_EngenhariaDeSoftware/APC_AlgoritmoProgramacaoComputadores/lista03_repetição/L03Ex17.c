/*
L03Ex17: Lesmas.
DESCRIÇÃO: A corrida de lesmas é um esporte que cresceu muito nos últimos anos, fazendo com que várias
pessoas dediquem suas vidas tentando capturar lesmas velozes, e treina-las para faturar milh˜oes em
corridas pelo mundo. Porém a tarefa de capturar lesmas velozes n˜ao é uma tarefa muito fácil, pois
praticamente todas as lesmas s˜ao muito lentas. Cada lesma é classificada em um nível dependendo de sua velocidade:
    Nível 1: Se a velocidade é menor que 10cm/h.
    Nível 2: Se a velocidade é maior ou igual a 10cm/h e menor que 20cm/h.
    Nível 3: Se a velocidade é maior ou igual a 20 cm/h.
Sua tarefa é identificar qual nível de velocidade da lesma mais veloz de um grupo de lesmas.
ENTRADA: A primeira linha contém um inteiro L (de 1 a 500, inclusive) representando o número de lesmas do grupo,
e a segunda linha contém L inteiros V i (de 1 a 50, inclusive) representando as velocidades de cada lesma do grupo.
SAÍDA: Para cada caso de teste, imprima uma única linha indicando o nível de velocidade da lesma mais veloz do grupo.
*/
#include <stdio.h>

int main(){

    int  quantidade,  velocidade, nivel, nivel_maior = 0;

    scanf("%d", &quantidade);

    do {
        scanf("%d", &velocidade);

        if (velocidade < 10)
            nivel = 1;
        else if (velocidade >= 10 && velocidade < 20)
            nivel = 2;
        else if (velocidade > 20)
            nivel = 3;

        if (nivel > nivel_maior)
        nivel_maior = nivel;

        quantidade--;

   } while (quantidade > 0);

    printf("%d\n", nivel_maior);
    return 0;
}
