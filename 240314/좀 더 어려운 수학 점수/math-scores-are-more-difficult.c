#include <stdio.h>

int main() {
    int e_s1, m_s1;
    int e_s2, m_s2;

    scanf("%d %d", &m_s1, &e_s1);
    scanf("%d %d", &m_s2, &e_s2);
    
    if(m_s1 != m_s2)
    {
        if(m_s1 > m_s2)
            printf("A");

        else
            printf("B");
    }

    else
    {
        if(e_s1 > e_s2)
           printf("A");
        else
            printf("B");    
    }

    return 0;
}