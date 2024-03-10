#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char r1[8];

    n==100? strcpy(r1, "pass") : strcpy(r1, "failure");

    printf("%s", r1);

    return 0;
}