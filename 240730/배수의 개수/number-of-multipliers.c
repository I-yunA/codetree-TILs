#include <stdio.h>

int main() {
    int n, cnt1, cnt2;
    cnt1=0;
    cnt2=0;

    for(int i=1; i<=10; i++) {
        scanf("%d", &n);
        if(n%3==0)
            cnt1++;
        if(n%5==0)
            cnt2++;
    }
    printf("%d %d", cnt1, cnt2);
    
    return 0;
}