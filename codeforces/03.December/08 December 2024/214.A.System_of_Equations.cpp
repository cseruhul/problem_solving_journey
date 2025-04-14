#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, limit, ans = 0;

    cin >> n >> m;

    limit = min(n, m);

    for (a = 0; a <= limit; a++)
    {
        for (b = 0; b <= limit; b++)
        {
            if (((a * a + b) == n) && ((a + b * b) == m))
            {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}