
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

void insertionSort(int vetor[], int n, int escolha) {

  int i, j, key, count;



  if (escolha == 0) {

    count = 0;

    for (i = 1; i < n; i++) {
      key = vetor[i];
      j = i - 1;


      while (j >= 0 && vetor[j] > key) {
        vetor[j + 1] = vetor[j];
        j = j - 1;

      }
      vetor[j + 1] = key;
      count++;
    }
    
    mostrarVetor(vetor, n);
    
  } else {

    count = 0;

    for (i = 1; i < n; i++) {
      key = vetor[i];
      j = i - 1;


      while (j >= 0 && vetor[j] < key) {
        vetor[j + 1] = vetor[j];
        j = j - 1;

      }
      vetor[j + 1] = key;
      count++;
    }
    
    mostrarVetor(vetor, n);
  }

  printf("%d", count);
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

  insertionSort(arr, n, escolha);

  return 0;
}
