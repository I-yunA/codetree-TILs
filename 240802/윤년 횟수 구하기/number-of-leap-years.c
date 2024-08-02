#include <stdio.h>

int main() {
    int n, cnt1;
    scanf("%d", &n);
    cnt1=0;

    for(int i=1; i<=n; i++) 
    {
        if(i%400==0)
            cnt1++;            
        else if(i%100!=0 && i%4==0)
            cnt1++;
    }
    /*두 조건 모두 cnt++파트이므로, 이는 하나의 조건으로 줄일 수 있다!
    for(int i = 1; i <= n; i++) {
		if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			cnt++;
	}*/
    printf("%d", cnt1);
    return 0;
}