/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num;
    int sum=0;

    for(int i=1; i<=n; i++) {
        scanf("%d", &num);
        if(num % 2==1 && num % 3 ==0)
            sum += num;
    }
    printf("%d", sum);
    return 0;
}
*/

#include <stdio.h>
int main() {
    int n;
    int num,sum=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        scanf("%d", &num);

        if(num%2==1 && num%3==0)
        sum+=num;
    }
    printf("%d", sum);
    return 0;
}