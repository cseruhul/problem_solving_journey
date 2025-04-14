#include <stdio.h>
#include <string.h>

int main()
{
    char s[102], t[102];
    int flag = 1, len_s, len_t, n;
    scanf("%s %s", &s, &t);
    len_s = strlen(s);
    len_t = strlen(t);

    if (len_s != len_t)
    {
        printf("NO", len_s, len_t);
        return 0;
    }
    else
    {
        n = len_s;
    }

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (s[i] != t[j])
        {
            // printf("%c %c", s[i], t[j]);
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
        printf("NO\n");
    }

    return 0;
}