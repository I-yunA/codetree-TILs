#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    double c = (a+b)/(a-b);
    printf("%.2lf", c);
    
    return 0;
}