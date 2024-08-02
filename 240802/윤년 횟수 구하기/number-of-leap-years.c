#include <stdio.h>

int main() {
    int n, cnt1;
    cnt1=0;

    for(int i=1; i<=n; i++) 
    {
        if(i%400==0)
            cnt1++;            
        else if(i%100!=0)
            cnt1++;
        else if(i%4==0)
            cnt1++;
    }
    printf("%d", cnt1);
    return 0;
}