#include <stdio.h>

int main()
{
    int n, k, time1 = 240, time = 0, count = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        if (time1 - i * 5 >= k)
        {
            time1 = time1 - i * 5;
            count++;
        }
    }

    printf("%d", count);

    return 0;
}