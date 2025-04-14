#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, sum = 0;
        bool even = false, odd = false;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;

            if (x % 2 == 0)
                even = true;
            if (x % 2 == 1)
                odd = true;
        }

        if ((sum % 2 != 0) || (even & odd))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}