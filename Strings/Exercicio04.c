
#include <stdio.h>


int mystrlen(char *str){

  int count = 0;
  for (int i = 0; str[i] != '\0'; i++){
    count++;
  }
  return count;
}


char remove_newline(char *str) {

    int qtdLettersString;
    int str_length = mystrlen(str);

    if (str[str_length - 1] == '\n'){
        str[str_length - 1] = '\0';
        str_length = str_length - 1;
    }

    return str_length;

}

int main(void){

  char palavra[50];

  //printf("Digite uma palavra:");
  //gets(palavra);
  fgets(palavra, 50, stdin);

  //int qtdCaracteres = mystrlen(palavra);
  int new_length = remove_newline(palavra);

  printf("A palavra possui %d caracteres\n", new_length);

  return 0;
  
}
