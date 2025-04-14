#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;

    cin >> t;

    while (t--)
    {
        cin >> n;

        if ((n % 4) != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }

        for (i = 1; i < n - 1; i += 2)
        {
            cout << i << " ";
        }
        cout << (i + (n / 2)) << endl;
    }

    return 0;
}