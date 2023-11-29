#include <stdio.h>

int buscaBinaria(int arr[], int inicial, int final, int n) {
  if (inicial <= final) {
    int indiceMedio = (inicial + final) / 2;

    if (n == arr[indiceMedio]) {
      return indiceMedio;
    }

    if (n < arr[indiceMedio]) {
      return buscaBinaria(arr, inicial, indiceMedio - 1, n);
    } else {
      return buscaBinaria(arr, indiceMedio + 1, final, n);
    }
  }

  return -1;
}

int main (void) {

  int tamanhoVetor;

  scanf("%d", &tamanhoVetor);

  
  int vetor[tamanhoVetor];

  for (int i = 0; i < tamanhoVetor; i++) {
    scanf("%d", &vetor[i]); 
  }

  int valorEscolhido;

  scanf("\n%d", &valorEscolhido);

  int resultado = buscaBinaria(vetor, 0, tamanhoVetor, valorEscolhido);

  if (resultado != -1) {
    printf("\n%d",resultado);
  } else {
    printf("-1");
  }

  return 0;
}