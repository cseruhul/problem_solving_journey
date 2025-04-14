#include <stdio.h>

int main()
{
    int m, n, sum = 0;
    scanf("%d", &n);
    int ch[n + 2];
    int freq[10] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &ch[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[ch[i]]++;
        // printf("%d ", ch[i]);
    }

    for (int i = 0; i <= 9; i++)
    {
        sum = sum + freq[i] * i;
        // printf("%d[%d] sum = %d\n", i, freq[i], sum);
    }

    printf("%d\n", sum);

    return 0;
}