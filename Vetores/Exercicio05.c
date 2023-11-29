#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}

int randomInt(int min, int max) { return rand() % (max - min + 1) + min; }

void generateArray(int min, int max, int n, int arr[]) {
  for (int i = 0; i < n; ++i) {
    arr[i] = randomInt(min, max);
  }
}

void uniao(int v1[], int v2[], int num1, int num2) {
  int v[num1 + num2];
  int index = 0;

  for (int i = 0; i < num1; i++) {
    int value = v1[i];
    int isDuplicate = 0;

    // Verifique se o valor já está presente no novo array
    for (int j = 0; j < index; j++) {
      if (v[j] == value) {
        isDuplicate = 1;
        break;
      }
    }

    // Se não for um duplicado, adicione-o ao novo array
    if (!isDuplicate) {
      v[index++] = value;
    }
  }

  for (int i = 0; i < num2; i++) {
    int value = v2[i];
    int isDuplicate = 0;

    // Verifique se o valor já está presente no novo array
    for (int j = 0; j < index; j++) {
      if (v[j] == value) {
        isDuplicate = 1;
        break;
      }
    }

    // Se não for um duplicado, adicione-o ao novo array
    if (!isDuplicate) {
      v[index++] = value;
    }
  }

  mostrarVetor(v, index);
}

int main() {
  int number1, number2;

  printf("Digite o tamanho do primeiro vetor:");
  scanf("%d", &number1);

  printf("Digite o tamanho do segundo vetor:");
  scanf("%d", &number2);

  int vector1[number1];
  int vector2[number2];

  srand(time(NULL));

  generateArray(0, 10, number1, vector1);
  generateArray(0, 10, number2, vector2);

  printf("Primeiro vetor gerado: ");
  mostrarVetor(vector1, number1);

  printf("Segundo vetor gerado: ");
  mostrarVetor(vector2, number2);

  printf("União dos vetores: ");
  uniao(vector1, vector2, number1, number2);

  return 0;
}