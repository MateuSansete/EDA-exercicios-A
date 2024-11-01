#include <stdio.h>

void multiplica_matrizes(int A[3][2], int B[2][3], int C[3][2], int i, int j, int k) {
    if (i == 3) // Base case: todas as linhas de A foram processadas
        return;

    if (j == 2) { // Todas as colunas de B foram processadas, passa para a próxima linha de A
        multiplica_matrizes(A, B, C, i + 1, 0, 0);
        return;
    }

    if (k == 2) { // Todas as colunas de A e linhas de B foram processadas, passa para a próxima coluna de B
        multiplica_matrizes(A, B, C, i, j + 1, 0);
        return;
    }

    // Calcula o elemento C[i][j] recursivamente
    C[i][j] += A[i][k] * B[k][j];

    // Passa para a próxima coluna de A e linha de B
    multiplica_matrizes(A, B, C, i, j, k + 1);
}

void imprime_matriz(int matriz[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int B[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int C[3][2] = {0};

    multiplica_matrizes(A, B, C, 0, 0, 0);

    printf("Matriz resultante C:\n");
    imprime_matriz(C);

    return 0;
}
