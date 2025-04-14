#include <stdio.h>
int main()
{
    char s[1001];
    int flag = 1, n = 0, j, i;
    scanf("%s", s);
    while (s[n] != '\0')
    {
        n++;
    }

    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }

    return 0;
}