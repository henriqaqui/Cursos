#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Este software responde se um numero eh IMPAR ou PAR.\n");
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d eh um numero...\nPAR\n", num);
    }
    else{
        printf("%d eh um numero...\nIMPAR\n", num);
    }
    return 0;
}

/*
 int main()
{
    int num;

    printf("Digite um numero: \n");
    scanf("%d", num);

    if(num % 2 == 0)
        printf("%d eh um numero par.", num);
    else
        printf("%d eh um numero impar.", num);
    return 0;
}
*/



