#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int sum=0;
    float avg=0.0;
    int count=0;
    for(int i=a; i<=b; i++) {
        if(i % 5 ==0 || i % 7==0) {
            sum += i;
            count++;
        }
    }
    avg = sum/count;
    printf("%d %.1f", sum, avg);

    return 0;
}