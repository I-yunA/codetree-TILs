#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char n;
    scanf("%c", &n);

    if(n=='S')
        printf("Superior");
    
    else if(n=='A')
        printf("Excellent");
    
    else if(n=='B')
        printf("Good");
    
    else if(n=='C')
        printf("Usually");
            
    else if(n=='D')
        printf("Effort");
    else    
        printf("Failure");                
    return 0;
}