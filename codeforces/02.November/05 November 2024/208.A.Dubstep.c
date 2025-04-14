#include <stdio.h>
#include <string.h>

int main()
{
    char ch[202], ans[202];
    int n, i, j;
    fgets(ch, 202, stdin);

    n = strlen(ch);
    i = 0;
    j = 0;
    
    while (i < n + 3)
    {
        if (ch[i + 0] == 'W' && ch[i + 1] == 'U' && ch[i + 2] == 'B')
        {
            // printf("%d ", i);
            // printf("%c%c%c\n", ch[i], ch[i + 1], ch[i + 2]);
            ans[j] = ' ';
            i += 2;
        }
        else
        {
            ans[j] = ch[i];
        }
        i++;
        j++;
    }

    printf("%s", ans);

    return 0;
}