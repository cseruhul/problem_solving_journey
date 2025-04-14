#include <stdio.h>

int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    char ch[n + 2];
    int freq[27] = {0};

    scanf("%s", ch);

    if (n < 26)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            freq[ch[i] - 'A'] = 1;
        }
        else
        {
            freq[ch[i] - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
