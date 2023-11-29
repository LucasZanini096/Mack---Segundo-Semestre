#include <stdio.h>

int verificacaoRecursao(int arr[], int tamanho, int num){

  if (tamanho < 0) return 0;

  int num_divisivel = (arr[tamanho] % num == 0) ? arr[tamanho] : 0;

  return num_divisivel + verificacaoRecursao(arr, tamanho -1, num);
}

int main() {

  int arr[] = {1,2,3,4,5,6,7};

  int tamanho_vetor = sizeof(arr)/sizeof(arr[0]) - 1;

  int num_divisor = 3;

  int soma_multiplos = verificacaoRecursao(arr, tamanho_vetor, num_divisor);

  printf("%d", soma_multiplos);

  return 0;
}