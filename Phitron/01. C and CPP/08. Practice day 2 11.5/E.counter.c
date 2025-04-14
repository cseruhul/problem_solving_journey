#include <stdio.h>

int main()
{
    char s[1000002];
    long long n, count = 0;

    scanf("%s", s);
    n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        count += s[i] - '0';
    }
    printf("%d\n", count);

    return 0;
}