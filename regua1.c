#include <stdio.h>

void draw_ruler(int n, int depth) {
    if (n == 0)
        return;
    
    draw_ruler(n - 1, depth - 1);
    
    printf(".\n");

    // Draw dashes at the midpoint
    for (int i = 0; i < depth; i++)
        printf("-");
    printf("\n");
    
    draw_ruler(n - 1, depth - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    // Draw the ruler
    draw_ruler(n, n);
    
    return 0;
}
