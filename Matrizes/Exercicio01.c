#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max) {

  srand(time(NULL));
  return rand() * (max + 1 - min) + min;
}

int Traco(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {

  int i;
  int somaTraco = 0;
  for (i = 0; i < nLinhas; i++) {
    somaTraco += matriz[i][i];
  }
  return somaTraco;
}

void construirMatriz(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {

  int i, j;
  //int min = 0;
  //int max = 10;
  for (i = 0; i < nLinhas; i++) {
    for (j = 0; j < nColunas; j++) {
       //matriz[i][j] = randomInt(min, max);
      printf("Digite o valor da posição [%d] [%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

int main(void) {

  int linhas, colunas;

  printf("Digite o número de linhas de uma matriz: ");
  scanf("%d", &linhas);

  printf("\nDigite o número de colunas de uma matriz: ");
  scanf("%d", &colunas);

  if ((linhas <= 1 || colunas <= 1) || (linhas != colunas)) {
    printf("Você precisa digitar um número de linhas e colunas condizentes com "
           "uma matriz quadrada");
    return 0;
  }

  int matriz[linhas][colunas];

  construirMatriz(linhas, colunas, matriz);

  int traco = Traco(linhas, colunas, matriz);

  printf("O valor do traço dessa matriz é %d", traco);
}
