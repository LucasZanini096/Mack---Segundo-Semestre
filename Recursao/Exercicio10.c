#include <stdio.h>

#define MAX 100
int memo[MAX];

int Fibonacci(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }

    if (memo[num] != 0) {
        return memo[num];
    }

    memo[num] = Fibonacci(num - 1) + Fibonacci(num - 2);

    return memo[num];
}

int main() {
    int num = 5;

    int num_fibonacci = Fibonacci(num);

    printf("Resultado da sequência será %d\n", num_fibonacci);

    return 0;
}