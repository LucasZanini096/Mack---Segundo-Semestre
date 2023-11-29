
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificacaoMatrizDiagonal(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]){

  int qtdNumerosDiagonal = nLinhas;
  int contadorZeros = 0;

  for(int i = 0; i < nLinhas; i++){
    for(int j = 0; j < nColunas; j++){
        if (matriz[i][j] == 0) contadorZeros++;
    }
  } 
  if (contadorZeros == qtdNumerosDiagonal) return 1;
  return 0;
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

  int resultadoMatrizDiagonal = verificacaoMatrizDiagonal(linhas,  colunas, matriz);

  if (resultadoMatrizDiagonal == 1) printf("\nA matriz é diagonal.");
    
  else printf("\nA matriz não é diagonal.");
 

  return 0;
}
