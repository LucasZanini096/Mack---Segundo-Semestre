#include <stdio.h>

// Função para encontrar a posição de um valor em um vetor
int encontrarPosicao(int vetor[], int tamanho, int valor) {
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == valor) {
      return i; // Valor encontrado, retornar a posição
    }
  }
  
  return -1; // Valor não encontrado
}

int main() {
  int vetor[5];
  int tamanho = 0; // Inicialmente, o vetor está vazio
  int x;

  printf("Digite até 5 números inteiros para o vetor (sem repetições):\n");
  
  // Leitura dos valores e verificação de duplicatas
  for (int i = 0; i < 5; i++) {
    scanf("%d", &x);
    
    if (encontrarPosicao(vetor, tamanho, x) == -1) {
      // Adicionar o valor ao vetor se não for uma duplicata
      vetor[tamanho] = x;
      tamanho++;
    } else {
      printf("Valor duplicado. Ignorando.\n");
    }
    
    // Se o vetor estiver cheio, interrompa a entrada de valores
    if (tamanho == 5) {
      break;
    }
  }

  printf("Digite o valor x que deseja encontrar: ");
  scanf("%d", &x);

  int posicao = encontrarPosicao(vetor, tamanho, x);

  if (posicao != -1) {
    printf("O valor %d foi encontrado na posição %d do vetor.\n", x, posicao);
  } else {
    printf("O valor %d não foi encontrado no vetor.\n", x);
  }

  return 0;
}