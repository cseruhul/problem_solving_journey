#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n + 1], max_coin = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        long long number;
        scanf("%lld", &number);
        arr[i] = number;
        if (number > max_coin)
        {
            max_coin = number;
        }
    }

    for (int i = 0; i < n; i++)
    {
        ans += max_coin - arr[i];
    }

    printf("%lld", ans);
    
    return 0;
}