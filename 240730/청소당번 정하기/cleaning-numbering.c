#include <stdio.h>

int main() {
    int a,b,c;
    int n;

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &n);
        
        if(a%2==0)
            a++;
        if(b%3==0)
            b++;
        if(c%12==0)
            c++;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}