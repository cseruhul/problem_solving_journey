#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, total_b = 0;

    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        total_b = b + a / 2;
        a = a % 2;

        if (a == 0 && total_b % 2 == 0)
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