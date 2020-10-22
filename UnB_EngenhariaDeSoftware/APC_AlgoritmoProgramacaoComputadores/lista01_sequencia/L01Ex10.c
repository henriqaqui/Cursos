/*
L01Ex10: Idade.
DESCRIÇÃO: Codifique um software receba o ano de nascimento de uma pessoa e o ano atual. Calcule e mostre:
    a) A idade dessa pessoa.
    b) Quantos anos essa pessoa terá em 2027.
ENTRADA: Duas entradas do tipo int.
SAÍDA: Duas saídas do tipo int, sendo a primeira para a idade atual e a segunda para a idade em 2027.
*/

#include <stdio.h>

int main(){
    int ano_nas, ano_atual, idade_atual, idade_2017;

    scanf("%d", &ano_nas);
    scanf("%d", &ano_atual);

    idade_atual = ano_atual - ano_nas;
    idade_2017 = 2017 - ano_nas;

    printf("%d\n%d\n", idade_atual, idade_2017);
    return 0;
}
