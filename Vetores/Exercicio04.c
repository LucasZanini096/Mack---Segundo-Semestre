#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int randomInt(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void generateArray(int min, int max, int n, int arr[])
{
    for (int i = 0; i < n; ++i)
    {
        arr[i] = randomInt(min, max);
    }
}

void diferenca(int arrA[], int arrB[], int n)
{
    int arrDif[n];
    int k = 0;
    int encontrou;

    for (int i = 0; i < n; ++i)
    {
        encontrou = 0;
        for (int j = 0; j < n; ++j)
        {
            if (arrA[i] == arrB[j])
            {
                encontrou = 1;
                break;
            }
        }
        if (!encontrou)
        {
            arrDif[k++] = arrA[i];
        }
    }

    mostrarVetor(arrDif, k);
}

int main()
{
    int number1, number2;

    printf("Digite o tamanho do primeiro vetor:");
    scanf("%d", &number1);

    printf("Digite o tamanho do segundo vetor:");
    scanf("%d", &number2);

    int vector1[number1];
    int vector2[number2];

    srand(time(NULL)); //Tem que declarar o srand(time(NULL)) no main

    generateArray(0, 10, number1, vector1);
    generateArray(0, 10, number2, vector2);

    printf("Primeiro vetor gerado: ");
    mostrarVetor(vector1, number1);

    printf("Segundo vetor gerado: ");
    mostrarVetor(vector2, number2);

    printf("Diferença dos vetores: ");
    diferenca(vector1, vector2, number1);

    return 0;

}