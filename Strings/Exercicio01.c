#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modificaString(char string[], char c1, char c2) {
    int tamanhoString = strlen(string);
    char caracterAtual;

    for (int i = 0; i < tamanhoString; i++) {
        caracterAtual = string[i];
        if (caracterAtual == c1) {
            string[i] = c2;
        }
    }
    printf("A palavra final ficou %s", string);
}

int main(void) {
    int tamanhoPalavra;

    printf("Digite o tamanho da palavra: ");
    scanf("%d", &tamanhoPalavra);

    // Aloca memória para a palavra dinamicamente
    char *palavra = (char *)malloc((tamanhoPalavra + 1) * sizeof(char));

    if (palavra == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    char letra1, letra2;

    printf("Digite uma letra do alfabeto: ");
    scanf(" %c", &letra1);  // O espaço antes de %c é importante para ignorar possíveis espaços em branco

    printf("Digite outra letra do alfabeto: ");
    scanf(" %c", &letra2);

    printf("Digite a palavra de tamanho %d: ", tamanhoPalavra);
    scanf("%s", palavra);

    printf("A palavra digitada foi %s\n", palavra);

    modificaString(palavra, letra1, letra2);

    // Libera a memória alocada para a palavra
    free(palavra);

    return 0;
}