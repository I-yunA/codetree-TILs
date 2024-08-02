#include <stdio.h>

int main() {
    int n,sum=0;

    for(int i=1; i<=n; i++){
        scanf("%d", &n);
        if((i%2==1)&&(i%3==0))
            sum+=i;
    }
    printf("%d", sum);
    return 0;
}