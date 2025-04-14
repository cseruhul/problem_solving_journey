#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long a, b, c, n, sum;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> n;
        long long max_coin = max({a, b, c});

        sum = a + b + c + n;

        if (sum % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (max_coin > (sum / 3))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}