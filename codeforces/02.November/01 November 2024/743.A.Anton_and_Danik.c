#include <stdio.h>

int main()
{
    int n, anton = 0, danik = 0;
    scanf("%d", &n);
    char ch[n];
    scanf("%s", &ch);

    for (int i = 0; i < n; i++)
    {
        if (ch[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        printf("Anton\n");
    }
    else if (anton < danik)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;
}