#include <stdio.h>

int main()
{
    int n, t, k;
    scanf("%d", &t);

    int freq[10005] = {0};

    for (int i = 1, j = 1; i < 10005; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            freq[j++] = i;
        }
    }

    // for (int i = 1; i < 1002; i++)
    // {

    //     printf("%d ", freq[i]);
    // }

    while (t--)
    {
        scanf("%d", &k);
        printf("%d\n", freq[k]);
    }

    return 0;
}