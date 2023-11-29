#include <time.h>
#include <stdlib.h>

int main() {
  int numWrite, numRandom, count;
  count = 0;
  
  srand(time(NULL));
  numRandom = rand() % 100;

  do {

    count++;
    printf("\nDigite um número de 0 a 100: ");
    scanf("%d", &numWrite);

    if (numWrite == numRandom) {
    printf("\nParabéns você advinhou o número misterioso!! Você precisou de %d", count);
    printf(" tentativas");
    break;
      

    } else if (numWrite < numRandom) {

    printf("\nVocê chutou muito baixo!");
      

    } else {

    printf("\nVocê chutou muito alto!");
  
    }
  } while(numWrite >=0 && numWrite <= 100);

  return 0;
}