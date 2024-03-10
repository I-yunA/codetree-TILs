#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x,&y);

    x += 8;
    y *=3;

    printf("%d\n%d\n%d", x, y, x * y);
    
    return 0;
}