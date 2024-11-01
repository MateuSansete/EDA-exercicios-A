#include <stdio.h>

int main() {
    int n;

    // Ler o valor de n
    scanf("%d", &n);

    // Loop para iterar sobre as linhas da pirâmide
    for (int i = 1; i <= n; i++) {
        // Imprimir espaços em branco à esquerda
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // Imprimir asteriscos
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        // Imprimir uma nova linha
        printf("\n");
    }

    return 0;
}

    