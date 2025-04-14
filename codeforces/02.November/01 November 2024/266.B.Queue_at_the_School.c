#include <stdio.h>

int main()
{
    int n, t, j, i;
    scanf("%d %d", &n, &t);
    char ch[n + 2];

    scanf("%s", &ch);

    for (i = 0; i < t; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (ch[j] == 'B' && ch[j + 1] == 'G')
            {
                char temp = ch[j];
                ch[j] = ch[j + 1];
                ch[j + 1] = temp;
                j++;
            }
        }
    }

    printf("%s", ch);

    return 0;
}