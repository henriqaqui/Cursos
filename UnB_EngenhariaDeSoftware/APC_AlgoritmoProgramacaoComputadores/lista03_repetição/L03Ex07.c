/*
L03Ex07: Conversor de Temperatura.
DESCRIÇÃO: A convers˜ao de graus Fahrenheit para Celsius é obtida pela fórmula: (TempFahrenheit -32 ) * 5/9 = TempCelsius.
Escreva um software que calcule e apresente todas as temperaturas (em Celsius) correspondentes a
uma faixa fornecida pelo usuário em Fahrenheit, incluindo os próprios valores limites.
A variaçao entre os valores da faixa deve observar a mudança de um grau Fahrenheit.
ENTRADA: Duas entradas int, sendo a primeira para a menor temperatura e o segundo para a maior teperatura em Fahrenheit.
SAÍDA: Para cada valor da faixa, mostrar a quantidade de graus Fahrenheit, sucedida de um espaço em branco,
um caractere ’F’, depois outro espaço em branco, o caractere ’:’, depois outro espaço em branco,
o correnspondente em graus Celsius, depois um espaço em branco, seguido do caractere ’C’, finalizado por quebra de linha.
*/

#include <stdio.h>
int main(){
    int fmenor, fmaior;
    double c;

    scanf("%d", &fmenor);
    scanf("%d", &fmaior);

    while (fmenor < fmaior + 1){
        c = (fmenor - 32) * 5 / (double)9; // OUTRA OPÇÃO: c = (fmenor - 32) * 5 / 9.;
        printf("%d F : %.1f C\n", fmenor, c);
        fmenor++;
    }
return 0;
}
