/*
L03Ex10: Folha de Pagamento.
DESCRIÇÃO: Codifique um software que calcule quanto uma empresa vai gastar com aumento
concedido aos seus funcionários. É sabido que ela vai conceder um aumento de R$100
para salários menores que R$ 500; de R$ 75 para salários na faixa entre R$500 e R$1000;
e de R$ 50 para salários maiores que R$ 1000.
Para fazer o cálculo o seu software deve fazer a leitura de salários, até que seja
informado um valor menor ou igual a zero. Tão logo seja encerrada a leitura, o software
deve apresentar o valor total a ser gasto com a folha com o aumento, além da diferença
que a empresa gastará a mais, tendo como referência os salários antes do aumento.
ENTRADA: Entradas do tipo int.
SAÍDA: Uma saída int para o total da folha sucedida de quebra de linha e outra saída int para a
diferença, também sucedida de quebra de linha.
*/

#include <stdio.h>

int main(){

    int salario, total = 0, total_sem_aumento = 0, diferenca;

    scanf("%d", &salario);

    while (salario > 0) {

        if (salario < 500) {
            total_sem_aumento += salario;
            salario += 100;
            total += salario;
        }   else if (salario >= 500 && salario <= 1000){
                total_sem_aumento += salario;
                salario += 75;
                total += salario;
            }   else if (salario > 1000){
                    total_sem_aumento += salario;
                    salario += 50;
                    total += salario;
                }
        scanf("%d", &salario);
    }

    diferenca = total - total_sem_aumento;

    printf("%d\n%d\n", total, diferenca);
    return 0;
}
