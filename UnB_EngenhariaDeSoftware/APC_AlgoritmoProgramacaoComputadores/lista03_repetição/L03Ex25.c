/*
L03Ex25: Primo e Fibonacci ao mesmo tempo.
Fa�a um programa que receba um n�mero inteiro e diga se ele � um n�mero primo e de fibonacci ao mesmo tempo.
Considere que seja digitado um n�mero maior que 0 (zero) e menor ou igual a 1000 (mil).
ENTRADA: Uma entrada do tipo long int.
SA�DA: String �SIM�ou �NAO�, procedida de uma quebra de linha.
*/
#include <stdio.h>
#include <math.h>

int main(){
    long int numero, divisor, primo = 1, fibonacci = 0, fibonacci_a = 0, fibonacci_b = 1, fibonacci_x; // O valor  de "primo" e "fibonacci" indica "0"falso e "1" verdadeiro.

    scanf("%li", &numero);

    while(fibonacci_b <= numero){
       if(fibonacci_a == numero  || fibonacci_b == numero) // "fibonacci_ab" para testar se "numero" pertence � fibonacci. O fibonacci_a � dispens�vel j� vai testar os primos tamb�m.
            fibonacci = 1;

        fibonacci_x = fibonacci_b;
        fibonacci_b = fibonacci_a + fibonacci_b;
        fibonacci_a = fibonacci_x;
    }

    if (fibonacci == 1){ //pergunto se fibonacci � verdadeiro para pular o c�lculo dos primos caso seja falso.

            // 3 porque vou testar s� �mpares e mantenho o 2 como primo verdadeiro;
            // sqrt(numero) porque se chegar at� a raiz n�o for divis�vel por algum n�mero ent�o � primo;
            // incremento para testar apenas �mpares.

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
