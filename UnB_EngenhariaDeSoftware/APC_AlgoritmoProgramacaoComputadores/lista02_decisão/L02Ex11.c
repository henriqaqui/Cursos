#include <stdio.h>

int main(){

    double x, fx;

    printf("Este software calcula o f(x) de uma funcao.\n\nDigite o x:\n");
    scanf("%lf", &x);

    if (x <= 1)
        fx = 1;
    if (x > 1 && x >= 2)
        fx = 2;
    if (x > 2 && x <= 3)
        fx = pow (x, 2);
    if (x > 3)
        fx = pow (x, 3);

    printf("O resultado da funcao e:\n%.1lf", fx);
    return 0;
}
