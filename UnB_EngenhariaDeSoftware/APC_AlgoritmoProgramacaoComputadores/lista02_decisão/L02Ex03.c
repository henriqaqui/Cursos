#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Este software responde quais numeros sao divisiveis por 3 e 7.\nDigite um numero:\n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
        printf("MULTIPLO");
    else
        printf("NAO E MULTPLO");
    return 0;
}
