#include <stdio.h>
#include <stdlib.h>
#define MAX 9

void trocaDiagonal (int matriz[MAX][MAX]){
    int diagonal_principal[MAX], diagonal_secundaria[MAX], troca[MAX];
    int l, c;

    for(l = 0, c = 8; l < MAX; l++, c--){
        diagonal_principal[l] = troca[l] = matriz[l][l];
        diagonal_secundaria[l] = matriz[l][c];
    }
    for(l = 0, c = 8; l < MAX; l++, c--){
        matriz[l][l] = diagonal_secundaria[l];
        matriz[l][c] = troca[l];
    }
}

int main()
{
  int M[MAX][MAX];
  int l, c;

  for(l=0;l<MAX;l++)
    for(c=0;c<MAX;c++)
       scanf("%d",&M[l][c]);

  trocaDiagonal(M);
  printf("\n");

  for(l=0;l<MAX;l++)
  {
    for(c=0;c<MAX;c++)
      printf("%d ",M[l][c]);
    printf("\n");
  }

  return 0;
}
