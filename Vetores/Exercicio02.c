#include <stdio.h>

void mostrarVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void ordenaDecrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho-1; i++)
    {
        for (int j = i; j < tamanho-1; j++)
        {
            if (vetor[i] < vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
  mostrarVetor(vetor, tamanho);
}


int main() {

  int qtdElementos;


  printf("Digite a quantidade de elementos de um vetor: ");
  scanf("%d", &qtdElementos);

  int numbers[qtdElementos];

  for(int i = 0; i < qtdElementos; i++) {
    printf("\nDigite o valor do índice %d ", i);
    scanf("%d", &numbers[i]);

  }
  ordenaDecrescente(numbers, qtdElementos + 1);
  return 0;
}