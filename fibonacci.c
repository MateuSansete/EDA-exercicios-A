#include <stdio.h>

#define MAX 100
long int memorizacao[MAX];

long int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    if (memorizacao[n] != 0) {
        return memorizacao[n];
    }

    memorizacao[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memorizacao[n];
}
