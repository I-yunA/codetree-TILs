#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    for(int i = a; i <= b; i += 2)
        printf("%d ", i);

    return 0;
}