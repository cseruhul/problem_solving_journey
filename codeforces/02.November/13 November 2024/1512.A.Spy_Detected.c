#include <stdio.h>

int main()
{
    int t, n, spy = 0, arr[101];

    scanf("%d", &t);

    while (t--)
    {
        int freq[101] = {0}, num;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);
            freq[num]++;
            arr[i] = num;
        }

        for (int i = 0; i < 101; i++)
        {
            if (freq[i] == 1)
            {
                num = i;
                break;
            }
        }
        // printf("%d ", num);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == num)
            {
                spy = i + 1;
                break;
            }
        }

        printf("%d\n", spy);
    }

    return 0;
}