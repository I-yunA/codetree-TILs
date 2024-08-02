#include <stdio.h>

int main() {
    int n;
    int even=0;

    for(int i=1; i<=5; i++)
    {
        scanf("%d", &n);
        if(n%2==0)
            even++;
    }
    printf("%d", even);
    return 0;
}