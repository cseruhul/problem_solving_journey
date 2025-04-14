#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, n, m, res;
    int t;

    cin >> t;

    while (t--)
    {
        cin >> x >> y >> n;
        m = n - y;
        m = m / x;
        res = m * x + y;

        cout << res << endl;
    }

    return 0;
}