#include <stdio.h>

void min_max(int *v, int n, int *min, int *max) {

    *min = *v;
    *max = *v;

    for (int i = 1; i < n; i++) {
      
      if (*(v + i) < *min)
        *min = *(v + i);

      if(*(v + i) > *max)
        *max = *(v + i);
    }

}


int main() {

  int v[] = { 5 , 2 , 9, 1 , 7};
  int n = sizeof(v) / sizeof(v[0]);
  int min;
  int max;

  min_max(v, n, &min, &max);

  printf("Valor mínimo: %d\n", min);
  printf("Valor máximo: %d\n", max);

}