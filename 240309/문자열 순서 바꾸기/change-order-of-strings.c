#include <stdio.h>

int main() {
    char s[105];
    char t[105];

    scanf("%s %s", s, t);

    char temp[105];
    temp[105] = s[105];
    s[105] = t[105];
    t[105] = temp[105];

    printf("%s\n%s", t, s);
    return 0;
}