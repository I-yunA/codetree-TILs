#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);

    for(int i = 1; i <= n; i++) {
        int n2;
        scanf("%d\n", &n2);
        if (n2 % 2 == 1 && n2 % 3 == 0)
            printf("%d\n", n2);
    }
    
    return 0;
}