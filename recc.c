#include <stdio.h>

int soma_cubos_recursiva(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * n * n + soma_cubos_recursiva(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número para calcular a soma dos cubos: ");
    scanf("%d", &numero);
    printf("A soma dos cubos dos números de 1 a %d é %d\n", numero, soma_cubos_recursiva(numero));
    return 0;
}
