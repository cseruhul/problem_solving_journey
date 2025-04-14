#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int candy, n, se = 0, so = 0;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> candy;

            if (candy % 2)
                so += candy;
            else
                se += candy;
        }

        if (se > so)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}