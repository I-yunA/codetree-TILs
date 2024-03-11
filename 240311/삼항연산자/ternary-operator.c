#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char r[8];

    (n==100)? strcpy(r, "pass") : strcpy(r, "failure");

    printf("%s", r);

    return 0;
}