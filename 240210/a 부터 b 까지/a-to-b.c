#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        if(i % 2 == 1) {
            printf("%d ", a);
            a *= 2;
        }
        else {
            printf("%d ", a);
            a += 3;
        }    

    }
    return 0;
}