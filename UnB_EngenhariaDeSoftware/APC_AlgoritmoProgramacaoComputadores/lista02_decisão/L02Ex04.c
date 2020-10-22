#include <stdio.h>

int main(){

    int a, b, c;

    printf("Este software ordena tres numeros de forma crescente.\n");
    printf("Digite o primenro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    printf("Digite o segundo numero:\n");
    scanf("%d", &c);
    printf("A ordem crescente e:\n");

    if (a <= b && b <= c)
        printf("%d\n%d\n%d\n", a, b, c);
    if (a <= c && c <= b)
        printf("%d\n%d\n%d\n", a, c, b);
    if (b <= a && a <= c)
        printf("%d\n%d\n%d\n", b, a, c);
    if  (b <= c && c <= a)
        printf("%d\n%d\n%d\n", b, c, a);
    if  (c <= a && a <= b)
        printf("%d\n%d\n%d\n", c, a, b);
    if  (c <= b && b <= a)
        printf("%d\n%d\n%d\n", c, b, a);
        return 0;
}

