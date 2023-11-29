
#include <stdio.h>

void mostrarVetor(int arr[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void ordenaDecrescente(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    for (int j = i; j < tamanho; j++) {
      if (vetor[i] < vetor[j]) {
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
      }
    }
  }
  mostrarVetor(vetor, tamanho);
}

void selectionSort(int arr[], int n, int escolha) {

  int i, j, minIndex, temp, count;
  count = 0;
  for (i = 0; i < n - 1; i++) {

    minIndex = i;
    for (j = i + 1; j < n; j++) {

      if (arr[j] < arr[minIndex]) {
        minIndex = j;
       
      }
       
    }
    count++;
    temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }

  if (escolha == 1) {
    mostrarVetor(arr, n);
  } else {
    ordenaDecrescente(arr, n);
  }

  printf("%d", count);
}

int main() {

  int n, escolha;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  if (n > 10) {
    printf("\nVocê deve digitar um tamanho menor que 10");
    return 0;
  }

  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("\nDigite o valor da posição %d: ", i);
    scanf("%d", &arr[i]);
  }

  printf("\nDigite 1 para ordem crescente ou 0 para ordem descrecente:");
  scanf("%d", &escolha);

  selectionSort(arr, n, escolha);

  return 0;
}
