#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n==2)
        printf("28");
    else if(n % 2 == 1)
    {
        if(n <= 7)
            printf("31");
        else
            printf("30");    
    }
    else if(n % 2 == 0)
    {
        if(n >= 8)
            printf("31");
        else
            printf("30");   
    }    
        

    return 0;
}