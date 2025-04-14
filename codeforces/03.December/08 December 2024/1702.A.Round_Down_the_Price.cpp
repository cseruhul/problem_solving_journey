#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m;

    cin >> t;

    while (t--)
    {
        cin >> m;
        int digit = 0, n = 1;
        int M = m;

        while (M)
        {
            M = M / 10;
            digit++;
        }

        while (digit > 1)
        {
            n *= 10;
            digit--;
        }

        cout << m - n << endl;
    }

    return 0;
}