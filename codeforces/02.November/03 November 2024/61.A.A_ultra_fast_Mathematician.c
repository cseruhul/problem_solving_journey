#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[102], ch2[102];
    scanf("%s %s", ch1, ch2);
    int n = strlen(ch1), i;
    char ch[n + 1];

    for (i = 0; i < n; i++)
    {
        if (ch1[i] == ch2[i])
        {
            ch[i] = '0';
        }
        else
        {
            ch[i] = '1';
        }
    }
    ch[i] = '\0';
    printf("%s", ch);
    return 0;
}