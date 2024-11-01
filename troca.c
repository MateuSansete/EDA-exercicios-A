#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    
    a = 100;
    b = 150;


    printf("Antes: %d %d\n", a, b);

    swap(&a, &b);


    printf("Depois: %d %d\n", a, b);

    return 0;
}