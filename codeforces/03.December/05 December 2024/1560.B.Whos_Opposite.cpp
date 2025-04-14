#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, n, diff = 0;
        cin >> a >> b >> c;

        n = 2 * abs(a - b);

        if (a > n || b > n || c > n)
        {
            d = -1;
        }
        else
        {
            d = n / 2 + c;
            while (d > n)
            {
                d -= n;
            }
        }

        cout << d << endl;
    }

    return 0;
}