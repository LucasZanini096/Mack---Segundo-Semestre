
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int diagonalSecundaria(int nLinhas, int nColunas,
                       int matriz[nLinhas][nColunas]) {
  int somaDiagonal = 0;
  int i, j;
  for (i = 0, j = nLinhas - 1; i < nLinhas && j >= 0; i++, j--) {
    somaDiagonal += matriz[i][j];
  }
  return somaDiagonal;
}

void construirMatriz(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {

  int i, j;
  for (i = 0; i < nLinhas; i++) {
    for (j = 0; j < nColunas; j++) {
      printf("Digite o valor da posição [%d] [%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}
int main(void) {

  int linhas, colunas;

  printf("Digite o número de linhas e colunas de uma matriz: ");
  scanf("%d", &linhas);

  colunas = linhas;

  if ((linhas <= 1 || colunas <= 1)) {
    printf("Você precisa digitar um número de linhas e colunas maior que 1");
    return 0;
  }

  int matriz[linhas][colunas];

  construirMatriz(linhas, colunas, matriz);

  int traco = diagonalSecundaria(linhas, colunas, matriz);

  printf("O valor da soma dos valores da Diagonal Secundária dessa matriz é %d",
         traco);
}