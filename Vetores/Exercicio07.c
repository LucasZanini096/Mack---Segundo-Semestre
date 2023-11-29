#include <stdio.h>

// Função para inverter um vetor de tamanho 5
void inverterVetor(int vetor[]) {
    int temp;
    for (int i = 0; i < 5 / 2; i++) {
        // Trocar o valor na posição i com o valor na posição oposta
        temp = vetor[i];
        vetor[i] = vetor[4 - i];
        vetor[4 - i] = temp;
    }
}

int main() {
    int vetor[5];

    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    inverterVetor(vetor);

    printf("Valores do vetor invertidos:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
