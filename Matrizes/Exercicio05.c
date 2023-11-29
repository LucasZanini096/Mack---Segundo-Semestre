
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

void construirMatriz(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {

  int i, j;
  for (i = 0; i < nLinhas; i++) {
    for (j = 0; j < nColunas; j++) {
      printf("Digite o valor da posição [%d] [%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  mostrarMatriz(nLinhas, nColunas, matriz);
  printf("\n");
}

void somaMatrizes(int nLinhas, int nColunas, int matrizA[nLinhas][nColunas], int matrizB[nLinhas][nColunas],int matrizC[nLinhas][nColunas]){

  for (int i = 0; i < nLinhas; i++){
    for (int j = 0; j < nColunas; j++){
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
  mostrarMatriz(nLinhas, nColunas, matrizC);
  printf("\n");
}
int main(void) {

  int linhasA, colunasA, linhasB, colunasB;

  printf("Digite o número de linhas da matriz A: ");
  scanf("%d", &linhasA);

  printf("\nDigite o número de colunas da matriz A: ");
  scanf("%d", &colunasA);

  printf("\nDigite o número de linhas da matriz B: ");
  scanf("%d", &linhasB);

  printf("\nDigite o número de colunas da matriz B: ");
  scanf("%d", &colunasB);

  if((linhasA == linhasB) && (colunasA == colunasB)) {

     int matrizA[linhasA][colunasA];
     int matrizB[linhasB][colunasB];
     int matrizC[linhasA][colunasA];

    printf("\nConstruindo a matriz A.\n");
    construirMatriz(linhasA, colunasA, matrizA);
    printf("\nConstruindo a matriz B.\n");
    construirMatriz(linhasB, colunasB, matrizB);

    somaMatrizes(linhasA, colunasA, matrizA, matrizB, matrizC);
    return 0;
  }

  printf("\nVocê não digitou matrizes de mesmo tamanho.\
   \nFim do programa.");
  return 0;
}