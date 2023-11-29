#include <stdio.h>

float somaRecursao(float arr[], int tamanho){

  if(tamanho < 0) return 0;

  return arr[tamanho] + somaRecursao(arr, tamanho-1);
  
}

int main() {

  float arr[] = {1.5,2.4,3.9,4.4,5.8,6.0};

  int tamanho_vetor = sizeof(arr)/sizeof(arr[0]) - 1;

  float somaNums = somaRecursao(arr, tamanho_vetor);

  printf("%f", somaNums);
  
  return 0;
}