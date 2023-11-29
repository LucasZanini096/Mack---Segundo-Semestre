
#include <stdio.h>
#include <stdlib.h>

void mostrarVetor(int arr[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void ordenaDecrescenteBubble(int vetor[], int tamanho) {
  int count = 0;

  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - 1; j++) {
      if (vetor[j] < vetor[j + 1]) {
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
        count++;
      }
    }
  }

  mostrarVetor(vetor, tamanho);
  printf("%d", count);
}

void bubbleSort(int vetor[], int n, int escolha) {
  int i, j, aux, count;

  count = 0;

  if (escolha == 0) {

    for (i = 0; i < n - 1; i++) {
      for (j = 0; j < n - 1; j++) {
        if (vetor[j] > vetor[j + 1]) {
          aux = vetor[j];
          vetor[j] = vetor[j + 1];
          vetor[j + 1] = aux;
          count++;
        }
      }
    }

    mostrarVetor(vetor, n);

    printf("%d", count);
    
  } else {
    ordenaDecrescenteBubble(vetor, n);
  }
}

int main() {

  int n, escolha;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  if (n > 10) {
    printf("Você deve digitar um tamanho menor que 10");
    return 0;
  }

  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("Digite o valor da posição %d: ", i);
    scanf("%d", &arr[i]);
  }

  printf("Digite 0 para ordem crescente ou 1 para ordem descrecente:");
  scanf("%d", &escolha);

  bubbleSort(arr, n, escolha);

  return 0;
}
