/*
L03Ex10: Folha de Pagamento.
DESCRI��O: Codifique um software que calcule quanto uma empresa vai gastar com aumento
concedido aos seus funcion�rios. � sabido que ela vai conceder um aumento de R$100
para sal�rios menores que R$ 500; de R$ 75 para sal�rios na faixa entre R$500 e R$1000;
e de R$ 50 para sal�rios maiores que R$ 1000.
Para fazer o c�lculo o seu software deve fazer a leitura de sal�rios, at� que seja
informado um valor menor ou igual a zero. T�o logo seja encerrada a leitura, o software
deve apresentar o valor total a ser gasto com a folha com o aumento, al�m da diferen�a
que a empresa gastar� a mais, tendo como refer�ncia os sal�rios antes do aumento.
ENTRADA: Entradas do tipo int.
SA�DA: Uma sa�da int para o total da folha sucedida de quebra de linha e outra sa�da int para a
diferen�a, tamb�m sucedida de quebra de linha.
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
