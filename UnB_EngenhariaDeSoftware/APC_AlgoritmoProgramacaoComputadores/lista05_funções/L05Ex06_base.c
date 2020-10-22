#include <stdio.h>

struct bilhete{
    int horarioEntrada;
    int horarioSaida;
    int horaEntrada;
    int minEntrada;
    int horaSaida;
    int minSaida;
    int preco;
};

void extrairHoraMin(struct bilhete *horario){

    horario->minEntrada = horario->horarioEntrada % 100;
    horario->horaEntrada = horario->horarioEntrada / 100;
    horario->minSaida = horario->horarioSaida % 100;
    horario->horaSaida = horario->horarioSaida / 100;
}

int obterIntervalo(struct bilhete horario){
    int horas_minuto;

    horas_minuto = (horario.horaSaida - horario.horaEntrada) * 60 + (horario.minSaida - horario.minEntrada);

    return horas_minuto;
}

int obterValorEstacionamento (int minutos){
    int valor = 0;

    if(minutos <= 15)
        return valor;
    else

        if(minutos >= 60){
            valor += 1800;
            minutos -= 60;
        } else {
            valor += minutos * 30;
            minutos = 0;
        }

        if(minutos >= 60){
            valor += 1200;
            minutos -= 60;
        } else{
            valor += minutos * 20;
            minutos = 0; //zerar os minutos senão o proximo if vai somar mais uma vez os valores.
        }

        if(minutos > 0)
            valor += minutos * 10;

    return valor;
}


int main()
{
    struct bilhete bilhetes[100];
    int contaCentavos, intervalo, receita=0;
    int contadorCarros=0, i, total=0;

    scanf("%d", &bilhetes[contadorCarros].horarioEntrada);
    while (bilhetes[contadorCarros].horarioEntrada>=0)
    {
        do
        {
            scanf("%d", &bilhetes[contadorCarros].horarioSaida);
        }
        while(bilhetes[contadorCarros].horarioSaida < bilhetes[contadorCarros].horarioEntrada);

        extrairHoraMin(&bilhetes[contadorCarros]);
        intervalo = obterIntervalo(bilhetes[contadorCarros]);
        contaCentavos = obterValorEstacionamento(intervalo);
        bilhetes[contadorCarros].preco = contaCentavos;
        printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n",bilhetes[contadorCarros].horaEntrada, bilhetes[contadorCarros].minEntrada, bilhetes[contadorCarros].horaSaida, bilhetes[contadorCarros].minSaida,intervalo, bilhetes[contadorCarros].preco);
        total += contaCentavos;
        contadorCarros++;
        scanf("%d", &bilhetes[contadorCarros].horarioEntrada);
    }

    printf("Faturamento total (centavos)\n%d\n", total);

    int inicioIntervalo, finalIntervalo;
    scanf("%d", &inicioIntervalo);
    do
    {
        scanf("%d", &finalIntervalo);
    }
    while (finalIntervalo  < inicioIntervalo);

    for (i = 0; i < contadorCarros ; i++)
    {
        if (bilhetes[i].horarioSaida>inicioIntervalo && bilhetes[i].horarioSaida< finalIntervalo)
        {
            receita += bilhetes[i].preco;
        }
    }

    printf("\nFaturamento no periodo (centavos)\n%d\n", receita);

    return 0;
}
