
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarVetor(int arr[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int randInt(int min, int max) { return rand() % (max - min + 1) + min; }

void generateArray(int min, int max, int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    arr[i] = randInt(min, max);
  }
}

void ordemCrescente(int arr[], int tamanho) {
  int numeroAtual;
  int proximoNumero;

  for (int i = 0; i < tamanho; ++i) {
    for (int j = i + 1; j < tamanho; ++j) {

      numeroAtual = arr[i];
      proximoNumero = arr[j];

      if (numeroAtual > proximoNumero) {
        arr[j] = arr[i];
        arr[i] = proximoNumero;
      }
    }
  }
}

int buscaBinaria(int arr[], int qtd, int n) {

  // Verificando o valor médio do vetor
  int inicial = 0;
  int final = qtd - 1;
  int indiceMedio;

  do {

    indiceMedio = (inicial + final) / 2;

    if (n == arr[indiceMedio]) {
      return indiceMedio;
    }

    // Se o valor definido for menor que o valor médio do array
    // Cortar o vetor esquerda
    if (n < arr[indiceMedio]) {
      final = indiceMedio - 1;
    }

    // Se o valor definido for maior que o valor médio do array
    // Cortar o valor a direita
    if (n > arr[indiceMedio]) {
      inicial = indiceMedio + 1;
    }

  } while (inicial <= final);

  return -1;
}

int main() {

  srand(time(NULL));

  int tamanhoVetor;

  printf("Digite o tamanho do vetor desejado:");
  scanf("%d", &tamanhoVetor);

  int vetor[tamanhoVetor];

  generateArray(0, 10, tamanhoVetor, vetor);
  ordemCrescente(vetor, tamanhoVetor);

  int valorEscolhido;

  printf("Digite um número do array: ");
  scanf("%d", &valorEscolhido);

  mostrarVetor(vetor, tamanhoVetor);

  int resultado = buscaBinaria(vetor, tamanhoVetor, valorEscolhido);

  if (resultado != -1) {
    printf("O valor digitado está presente no array");
  } else {
    printf("O valor digitado não consta no array");
  }

  return 0;
}