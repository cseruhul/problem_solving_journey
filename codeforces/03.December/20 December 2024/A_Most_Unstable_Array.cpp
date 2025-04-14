#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long n, m, ans;
        cin >> n >> m;

        if (n == 1)
            ans = 0;
        else if (n == 2)
            ans = m;
        else
            ans = 2 * m;

        cout << ans << endl;
    }

    return 0;
}