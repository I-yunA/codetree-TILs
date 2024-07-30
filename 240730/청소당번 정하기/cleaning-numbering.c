#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);//한번만 입력

    int a=0, b=0, c=0;//초기화

    for(int i=1; i<=n; i++)
    {
        if(i%12==0)// 주기가 긴 것부터//i값이 증가하면서
            c++; //카운트 변수
        else if(i%3==0)//겹치면 안되서 
            b++;
        else if(i%2==0)
            a++;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}