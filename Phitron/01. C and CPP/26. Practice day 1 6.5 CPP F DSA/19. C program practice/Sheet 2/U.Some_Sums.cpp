#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n, a, b, ans = 0, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        sum = sumOfDigits(i);
        if (sum >= a && sum <= b)
        {
            // cout << i << " ";
            ans += i;
        }
    }

    cout << ans;

    return 0;
}