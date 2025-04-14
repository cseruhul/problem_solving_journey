#include <stdio.h>
#include <string.h>

int main()
{
    char ch[101];
    scanf("%s", &ch);
    int n = strlen(ch);
    int i = 0, j = 0, length = 0;

    for (i = 1; i < n; i++)
    {
        if (ch[i] != ch[i - 1])
        {
            length = (length > i - j) ? length : i - j;
            j = i;
        }
    }
    length = (length > i - j) ? length : i - j;
    if (length >= 7)
    {
        printf("YES", length);
    }
    else
    {
        printf("NO", length);
    }
    return 0;
}