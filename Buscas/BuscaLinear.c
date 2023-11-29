#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randInt(int min, int max) { return rand() % (max - min + 1) + min; }

void gererateArray(int min, int max, int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    arr[i] = randInt(min, max);
  }
}

int buscalinear(int arr[], int n, int q) {
  int numAtual;
  for (int i = 0; i <= n; i++){
    numAtual = arr[i];

    if (numAtual == q){
      return i;
    }
  }
  return -1;
}

int main (void) {

  int vetor[5] = {2,5,6,7,8};
  int tamanhoVetor = sizeof(vetor) / sizeof(vetor[0]);
  int valorEscolhido;

  printf("Digite um número do array: ");
  scanf("%d", &valorEscolhido);

  int resultado = buscalinear(vetor, tamanhoVetor, valorEscolhido);

  if (resultado != -1) {
    printf("O valor digitado está presente no array");
  } else {
    printf("O valor digitado não consta no array");
  }
  

  return 0;
}