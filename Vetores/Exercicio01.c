#include <stdio.h>


int copiar(int original[], int n) {

  int copia[n];

  for (int i = 0; i < n ; ++i) {
    copia[i] = original[i];
  }
  return copia[n];
}

int ordemCrecente (int arr[], int n) {

    int a;

    for (int i = 0; i < n ; ++i) {
      for (int j = i + 1; j < n; ++j){
        if(arr[i] > arr[j]){
          a = arr[i];
          arr[i] = arr[j];
          arr[j] = a;

        }
      }
    }
  return arr[n];
}


int main() {

  int qtd;

  printf("Digite o quantidade de números da lista: ");
  scanf("%d", &qtd);

  int numbers[qtd];

  for(int i = 0; i < qtd; i++ ) {
    printf("\nDigite o valor do índice %d ", i);
    scanf("%d", &numbers[i]);

  }

  printf("\n");

  int vetorCopia;
  vetorCopia = copiar(numbers, qtd);
  int vetorOrdenado = ordemCrecente(numbers, qtd);

  if(vetorOrdenado == vetorCopia) {
    printf("A ordem dos elementos do vetor é crescente") ;
  } else {
    printf("A ordem dos elementos do vetor não é crescente");
  }

  return 0;
}