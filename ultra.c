#include <stdio.h>

int main() {
    int V[1000], temp[100];
    int limite, num, soma = 0, i = 0, j, ultimo = -1;

  
    do {
        scanf("%d", &num);
        if (num != 0) {
            V[i] = num;
            i++;
        }
    } while (num != 0);

    scanf("%d", &limite);

    
    for (j = 0; j < i; j++) {
        soma += V[j];
        if (soma < limite) {
            temp[++ultimo] = V[j]; 
            soma = 0;
        }
    }

    for (j = ultimo; j >= 0; j--) {
        printf("%d\n", temp[j]);
    }

    return 0;
}

