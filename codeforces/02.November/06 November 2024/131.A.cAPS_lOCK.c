#include <stdio.h>
#include <string.h>

int main()
{
    char ch[101];
    int n, upper = 0, lower = 0;
    scanf("%s", ch);

    n = strlen(ch);

    for (int i = 0; i < n; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    
    if (upper == n)
    {
        for (int i = 0; i < n; i++)
        {
            ch[i] = ch[i] + 32;
        }
    }
    else if (lower == 1 && (ch[0] >= 'a' && ch[0] <= 'z'))
    {
        ch[0] = ch[0] - 32;

        for (int i = 1; i < n; i++)
        {
            ch[i] = ch[i] + 32;
        }
    }

    printf("%s", ch);

    return 0;
}