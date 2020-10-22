#include <stdio.h>

void trocaValores (int *num1, int *num2){
    int troca;
    troca = *num1;
    *num1 = *num2;
    *num2 = troca;

}

int main(){
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    trocaValores(&var1, &var2);
    printf("%d\n%d\n", var1, var2);
    return 0;
}
