#include <stdio.h>

int main() {
    int jogadorA, jogadorB, jogadorC;

    // Leitura dos valores escolhidos pelos jogadores
    scanf("%d %d %d", &jogadorA, &jogadorB, &jogadorC);

    // Verifica se algum jogador ganhou
    if ((jogadorA != jogadorB) && (jogadorA != jogadorC)) {
        printf("A\n");
    } else if (jogadorB != jogadorC) {
        printf("B\n");
    } else if (jogadorA != jogadorC) {
        printf("C\n");
    } else {
        printf("empate\n");
    }

    return 0; 
}

