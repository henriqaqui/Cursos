/*
L03Ex25: Primo e Fibonacci ao mesmo tempo.
Faça um programa que receba um número inteiro e diga se ele é um número primo e de fibonacci ao mesmo tempo.
Considere que seja digitado um número maior que 0 (zero) e menor ou igual a 1000 (mil).
ENTRADA: Uma entrada do tipo long int.
SAÍDA: String ”SIM”ou ”NAO”, procedida de uma quebra de linha.
*/
#include <stdio.h>
#include <math.h>

int main(){
    long int numero, divisor, primo = 1, fibonacci = 0, fibonacci_a = 0, fibonacci_b = 1, fibonacci_x; // O valor  de "primo" e "fibonacci" indica "0"falso e "1" verdadeiro.

    scanf("%li", &numero);

    while(fibonacci_b <= numero){
       if(fibonacci_a == numero  || fibonacci_b == numero) // "fibonacci_ab" para testar se "numero" pertence à fibonacci. O fibonacci_a é dispensável já vai testar os primos também.
            fibonacci = 1;

        fibonacci_x = fibonacci_b;
        fibonacci_b = fibonacci_a + fibonacci_b;
        fibonacci_a = fibonacci_x;
    }

    if (fibonacci == 1){ //pergunto se fibonacci é verdadeiro para pular o cálculo dos primos caso seja falso.

            // 3 porque vou testar só ímpares e mantenho o 2 como primo verdadeiro;
            // sqrt(numero) porque se chegar até a raiz não for divisível por algum número então é primo;
            // incremento para testar apenas ímpares.

        for(divisor = 3; divisor <= sqrt(numero); divisor+=2){
            if (numero % divisor == 0)
                primo = 0;
        }
        if ((numero == 1 || numero == 0) || (numero % 2 == 0 && numero != 2))
          primo = 0;
    }

    if (fibonacci == 1 && primo == 1)
        printf("SIM\n");
    else
        printf("NAO\n");

   return 0;
}
