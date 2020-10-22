/*
L03Ex07: Conversor de Temperatura.
DESCRI��O: A convers�ao de graus Fahrenheit para Celsius � obtida pela f�rmula: (TempFahrenheit -32 ) * 5/9 = TempCelsius.
Escreva um software que calcule e apresente todas as temperaturas (em Celsius) correspondentes a
uma faixa fornecida pelo usu�rio em Fahrenheit, incluindo os pr�prios valores limites.
A varia�ao entre os valores da faixa deve observar a mudan�a de um grau Fahrenheit.
ENTRADA: Duas entradas int, sendo a primeira para a menor temperatura e o segundo para a maior teperatura em Fahrenheit.
SA�DA: Para cada valor da faixa, mostrar a quantidade de graus Fahrenheit, sucedida de um espa�o em branco,
um caractere �F�, depois outro espa�o em branco, o caractere �:�, depois outro espa�o em branco,
o correnspondente em graus Celsius, depois um espa�o em branco, seguido do caractere �C�, finalizado por quebra de linha.
*/

#include <stdio.h>
int main(){
    int fmenor, fmaior;
    double c;

    scanf("%d", &fmenor);
    scanf("%d", &fmaior);

    while (fmenor < fmaior + 1){
        c = (fmenor - 32) * 5 / (double)9; // OUTRA OP��O: c = (fmenor - 32) * 5 / 9.;
        printf("%d F : %.1f C\n", fmenor, c);
        fmenor++;
    }
return 0;
}
