#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int ans = 2 * ((n * x) + (m * x));
        cout << ans << endl;
    }

    return 0;
}