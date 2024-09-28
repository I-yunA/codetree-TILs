/*
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count=0;

    for(int i=a; i<=b; i++) {
        count += i;     
    }
    printf("%d", count);
    return 0;
} */

#include <stdio.h>
int main() {
    int a, b;
    int num=0;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++)
        num+=i;
    
    printf("%d", num);
    return 0;

}