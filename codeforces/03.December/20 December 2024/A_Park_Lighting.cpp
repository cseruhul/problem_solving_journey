#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, m, ans;
        cin >> n >> m;

        if (((n % 2) == 0) || ((m % 2) == 0))
        {
            ans = (n * m) / 2;
        }
        else
        {
            ans = ((n * m) + 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}