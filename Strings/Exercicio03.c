
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int numLetrasMaiusculas(char str[]) {

  int count = 0;
  for (int i = 1; str[i] != '\0'; i++) {
    if (isupper(str[i])) {
      count++;
    }
  }
  return count;
}

char *espacosEntreMaiusculas(char str[]) {
  {
    // Quantidade de letras Maiúsculas, exceto pela primeira

    int qtdMaiusculas = numLetrasMaiusculas(str);
    int i = strlen(str);
    int j = i + qtdMaiusculas;
    char anterior;

    str[i + qtdMaiusculas] = str[i];

    // Verificação da presença de letras maiúsculas na palavra

    if (qtdMaiusculas == 0)
      return str;

    for (j--; j > 1; j--)
    // A primeira letra não pode !!
    // Tenho que apontar para o último carácter

    {

      if (isupper(str[j])) {

        // str[j+1] = str[j];
        anterior = str[j+1];
        
        for (int a = j; a <= i + qtdMaiusculas; ++a) {
          
          str[j + 1] = str[j];
          str[j+2] = anterior;
          
        }
        str[j] = ' ';
      }
    }
    return str;
  }
}

int main(void) {

  char palavra[] = "LucasZanini";

  // printf("\nDigite a palavra de tamanho %d:", tamanhoPalavra);
  // scanf("%s", palavra);

  char *novapalavra = espacosEntreMaiusculas(palavra);

  printf("%s", novapalavra);

  return 0;
}
