/*
L03Ex17: Lesmas.
DESCRI��O: A corrida de lesmas � um esporte que cresceu muito nos �ltimos anos, fazendo com que v�rias
pessoas dediquem suas vidas tentando capturar lesmas velozes, e treina-las para faturar milh�oes em
corridas pelo mundo. Por�m a tarefa de capturar lesmas velozes n�ao � uma tarefa muito f�cil, pois
praticamente todas as lesmas s�ao muito lentas. Cada lesma � classificada em um n�vel dependendo de sua velocidade:
    N�vel 1: Se a velocidade � menor que 10cm/h.
    N�vel 2: Se a velocidade � maior ou igual a 10cm/h e menor que 20cm/h.
    N�vel 3: Se a velocidade � maior ou igual a 20 cm/h.
Sua tarefa � identificar qual n�vel de velocidade da lesma mais veloz de um grupo de lesmas.
ENTRADA: A primeira linha cont�m um inteiro L (de 1 a 500, inclusive) representando o n�mero de lesmas do grupo,
e a segunda linha cont�m L inteiros V i (de 1 a 50, inclusive) representando as velocidades de cada lesma do grupo.
SA�DA: Para cada caso de teste, imprima uma �nica linha indicando o n�vel de velocidade da lesma mais veloz do grupo.
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
