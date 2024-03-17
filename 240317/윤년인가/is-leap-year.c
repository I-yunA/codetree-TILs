#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    if(y % 400 == 0)
        printf("true");
    else if(y % 100 == 0)
        printf("false");
    else if(y % 4 == 0)
        printf("true");
    else
    //1,2,3을 모두 만족하지 않는다. 
        printf("false");               

    return 0;
}