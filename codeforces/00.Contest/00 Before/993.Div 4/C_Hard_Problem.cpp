#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int total = 0;

        if (a >= m)
            total += m;
        else
            total += a;

        if (b >= m)
            total += m;
        else
            total += b;

        int remain = 2 * m - total;

        if (c >= remain)
            total += remain;
        else
            total += c;

        cout << total << endl;
    }

    return 0;
}