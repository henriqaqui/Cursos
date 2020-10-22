#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Este software responde se um numero eh ou nao divisivel por outro.\nDigite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
        printf("MULTIPLO\n");
    else
        printf("NAO MULTIPLO\n");

    return 0;
}

