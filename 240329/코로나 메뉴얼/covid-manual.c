#include <stdio.h>

int main() {
    char num;
    char cold;
    int temp;

    scanf("%c %d ", &cold, &temp);
    scanf("%c %d ", &cold, &temp);
    scanf("%c %d ", &cold, &temp);

    if(cold == 'Y')
    {
        if(temp >= 37)
        {
            num = 'A';
            num >= 2;
            printf("E");
        }      
        else
            printf("N");    
    }
    else 
    {
        printf("N");
    }


    return 0;
}