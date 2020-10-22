/*
L04Ex17: Maior resto da soma da linha pela diagonal.
DESCRIÇÃO: Codifique um software que leia os valores de uma matriz quadrada de ordem 8 de inteiros.
Calcule a soma de sua diagonal SD. Por fim, imprima o número da linha da matriz, cuja soma SL
dos seus elementos dividida por SD tenha o maior resto.
ENTRADA: Uma sequência de 64 números do tipo int. A leitura deve seguir a sequencia linha para colula.
Ou seja, ser˜ao lidos todas as colunas da 1a linha, depois para a 2a linha e por ai em diante.
SAÍDA: Um inteiro correspondente ao número da linha da matriz, sucedido de quebra de linha.
*/
#include <stdio.h>

int main(){
  int numero[8][8], x, y, soma_diagonal = 0, soma_y[8] = {0}, maior_resto, resto, y_maior_resto;

  for(y=0; y<8;y++){
    for(x=0; x<8; x++){
      scanf("%d", &numero[y][x]);
      if(y == x)
        soma_diagonal += numero[y][x];
      soma_y[y] += numero[y][x];
    }
  }

  y--;
  maior_resto = soma_y[y] % soma_diagonal;
  y_maior_resto = y;

  for(y--;y>=0; y--){
    resto = soma_y[y] % soma_diagonal;
    if(resto > maior_resto){
      maior_resto = resto;
      y_maior_resto = y;
    }
  }

  printf("%d\n", y_maior_resto);

  return 0;
}
