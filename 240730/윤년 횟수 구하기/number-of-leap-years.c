#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n%4==0) {
            if(n%400==0)
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}