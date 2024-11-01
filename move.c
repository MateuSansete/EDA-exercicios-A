#include <stdio.h>
#include <string.h>

void move_x_to_end(char *s) {
    int len = strlen(s);
    int i, j = 0;

    // Movendo todos os caracteres diferentes de 'x' para o início da string
    for (i = 0; i < len; i++) {
        if (s[i] != 'x') {
            s[j++] = s[i];
        }
    }

    // Adicionando os caracteres 'x' no final da string
    for (i = 0; i < len - j; i++) {
        s[j + i] = 'x';
    }

    
    s[j + i] = '\0';
}

int main() {
    char str[101]; 

    // Obtendo a entrada do usuário
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    move_x_to_end(str);

    // Imprimindo a nova string
    printf("%s\n", str);

    return 0;
}
