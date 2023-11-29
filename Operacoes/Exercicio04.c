#include <time.h>
#include <stdlib.h>

int main() {
  
  int numWrite, numRandom;

  srand(time(NULL));
  numRandom = rand() % 100;
  
  // srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
  //com o valor da função time(NULL). Este por sua vez, é calculado
  //como sendo o total de segundos passados desde 1 de janeiro de 1970
  //até a data atual.
  //Desta forma, a cada execução o valor da "semente" será diferente.
  
  

  do {
    printf("\nDigite um número de 0 a 100: ");
    scanf("%d", &numWrite);

    if (numWrite == numRandom) {
    printf("\nParabéns você advinhou o número misterioso");
    break;

    } else if (numWrite < numRandom) {

    printf("\nVocê chutou muito baixo! O valor correto é %d", numRandom);
     

    } else {

    printf("\nVocê chutou muito alto! O valor correto é %d", numRandom);
  
    }
  } while(!(numWrite >=0 && numWrite <= 100));
  
  return 0;
}