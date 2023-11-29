
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarMatriz(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {
  for (int i = 0; i < nLinhas; i++) {
    for (int j = 0; j < nColunas; j++) {
      printf("%d  ", matriz[i][j]);
    }
    printf("\n");
  }
}

void construirMatrizTransposta(int nLinhas, int nColunas,
                               int matriz[nLinhas][nColunas]) {

  int matrizTransposta[nColunas][nLinhas];

  for (int i = 0; i < nLinhas; i++) {
    for (int j = 0; j < nColunas; j++) {
      matrizTransposta[j][i] = matriz[i][j];
    }
  }
  mostrarMatriz(nColunas, nLinhas, matrizTransposta);
}

void construirMatriz(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {

  int i, j;
  for (i = 0; i < nLinhas; i++) {
    for (j = 0; j < nColunas; j++) {
      printf("Digite o valor da posição [%d] [%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  mostrarMatriz(nLinhas, nColunas, matriz);
}
int main(void) {

  int linhas, colunas;

  printf("Digite o número de linhas de uma matriz: ");
  scanf("%d", &linhas);

  printf("\nDigite o número de colunas de uma matriz: ");
  scanf("%d", &colunas);

  int matriz[linhas][colunas];

  printf("\n");
  construirMatriz(linhas, colunas, matriz);
  printf("\n");
  construirMatrizTransposta(linhas, colunas, matriz);
  printf("\n");
}
