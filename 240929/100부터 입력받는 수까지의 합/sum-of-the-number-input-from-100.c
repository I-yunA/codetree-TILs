/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum=0;

    for(int i =n; i<=100; i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}*/

#include <stdio.h>
int main() {
    int n;
    int num=0;
    scanf("%d", &n);

    for(int i=n; i<=100; i++)
    num+=i;

    printf("%d", num);
    return 0;
}