#include <stdio.h>

// Função para preencher o vetor e contar valores diferentes
int contarValoresDiferentes(int vetor[], int tamanho) {
  int diferentes = 0;

  for (int i = 0; i < tamanho; i++) {
    int valor;
    int repetido = 0;

    printf("Digite o valor para a posição %d: ", i + 1);
    scanf("%d", &valor);

    // Verifique se o valor já foi inserido anteriormente
    for (int j = 0; j < i; j++) {
      if (vetor[j] == valor) {
        repetido = 1;
        break;
      }
    }

    // Se não for um valor repetido, conte-o como diferente
    if (!repetido) {
      diferentes++;
    }

    vetor[i] = valor;
  }

  return diferentes;
}

int main() {
  int vetor[10];
  int tamanho = 10;

  printf("Digite 10 valores para o vetor:\n");

  int diferentes = contarValoresDiferentes(vetor, tamanho);

  printf("Quantidade de valores diferentes: %d\n", diferentes);

  return 0;
}