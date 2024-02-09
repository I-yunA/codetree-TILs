#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    int i = 1;
    while(i<=8) {
        printf("%c", c);
        i++;
    }

    return 0;
}