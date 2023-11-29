#include <stdio.h>
#include <stdbool.h>

bool verificacaoRecursao(int arr[], int tamanho, int num){

  if(tamanho < 0) return true;

  if (arr[tamanho] % num == 0) return verificacaoRecursao(arr, tamanho -1, num);

  return false;
}

int main() {

  int arr[] = {2,4,6};

  int tamanho_vetor = sizeof(arr)/sizeof(arr[0]) - 1;

  int num_divisor = 2;

  bool verificacao = verificacaoRecursao(arr, tamanho_vetor, num_divisor);

  printf("%d", verificacao);

  return 0;
}