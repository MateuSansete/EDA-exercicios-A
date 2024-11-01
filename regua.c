#include <stdio.h>

void regua(int n, int profundidade) {
    if (n == 0)
        return;
    
    regua(n - 1, profundidade - 1);
    
    printf(".");

    // Desenha os traços no ponto médio
    for (int i = 0; i < profundidade; i++)
        printf("-");
    printf("\n");
    
    regua(n - 1, profundidade - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    

    regua(n, n);
    
    return 0;
}
