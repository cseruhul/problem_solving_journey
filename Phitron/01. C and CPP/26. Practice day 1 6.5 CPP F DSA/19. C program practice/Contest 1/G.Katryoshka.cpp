#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, k, total = 0;

    cin >> n >> m >> k;

    if (n <= k && n <= m)
    {
        total += n;
    }
    else if (m <= n && m <= k)
    {
        total += m;
        n -= m;
        k -= m;
        if (n / 2 <= k)
            total += n / 2;
        else
            total += k;
    }
    else
    {
        total += k;
    }

    cout << total;

    return 0;
}