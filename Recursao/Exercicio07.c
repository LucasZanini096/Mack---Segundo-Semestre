#include <stdio.h>

int verificacaoRecursao(int arr[], int tamanho, int num){
  
  if (tamanho < 0) return 0;

  int divisivel = (arr[tamanho] % num == 0) ? 1 : 0;

  return divisivel + verificacaoRecursao(arr, tamanho -1, num);
}

int main() {

  int arr[] = {1,2,3,4,5,6,7};

  int tamanho_vetor = sizeof(arr)/sizeof(arr[0]) - 1;

  int num_divisor = 3;

  int quantidade_divisores = verificacaoRecursao(arr, tamanho_vetor, num_divisor);

  printf("%d", quantidade_divisores);

  return 0;
}