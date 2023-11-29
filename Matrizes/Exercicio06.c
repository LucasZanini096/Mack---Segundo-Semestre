
#include <stdio.h>
#include <stdlib.h>

void mostrarMatriz(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {
    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

void construirMatriz(int nLinhas, int nColunas, int matriz[nLinhas][nColunas]) {
    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            printf("Digite o valor da posição [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicacaoMatrizes(int linhasA, int colunasA, int matrizA[linhasA][colunasA], int linhasB, int colunasB, int matrizB[linhasB][colunasB], int matrizC[linhasA][colunasB]) {
    if (colunasA != linhasB) {
        printf("As matrizes não podem ser multiplicadas devido às dimensões incompatíveis.\n");
        return;
    }

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            int somador = 0;
            for (int k = 0; k < colunasA; k++) {
                somador += matrizA[i][k] * matrizB[k][j];
            }
            matrizC[i][j] = somador;
        }
    }
}

int main(void) {
    int linhasA, colunasA, linhasB, colunasB;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linhasA);
    colunasA = linhasA;

    printf("Digite o número de linhas da matriz B: ");
    scanf("%d", &linhasB);
    colunasB = 1;

    if (colunasA == linhasB) {
        int matrizA[linhasA][colunasA];
        int matrizB[linhasB][colunasB];
        int matrizC[linhasA][colunasB];

        printf("\nConstruindo a matriz A.\n");
        construirMatriz(linhasA, colunasA, matrizA);
        printf("\nConstruindo a matriz B.\n");
        construirMatriz(linhasB, colunasB, matrizB);

        multiplicacaoMatrizes(linhasA, colunasA, matrizA, linhasB, colunasB, matrizB, matrizC);

        printf("\nResultado da multiplicação:\n");
        mostrarMatriz(linhasA, colunasB, matrizC);
    } else {
        printf("\nAs matrizes não podem ser multiplicadas devido às dimensões incompatíveis.\n");
    }

    return 0;
}
