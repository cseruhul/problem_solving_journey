#include <stdio.h>

int main()
{
    int n, p, q, number, flag = 1;
    scanf("%d", &n);
    int freq[101] = {0};

    scanf("%d", &p);
    while (p--)
    {
        scanf("%d", &number);
        freq[number] = 1;
    }

    scanf("%d", &q);
    while (q--)
    {
        scanf("%d", &number);
        freq[number] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}