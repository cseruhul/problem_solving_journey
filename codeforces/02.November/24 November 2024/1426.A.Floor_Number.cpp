#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, floor;

    cin >> t;

    while (t--)
    {
        cin >> n >> x;

        if (n == 1 || n == 2)
        {
            cout << "1" << endl;
        }
        else
        {
            n -= 2;
            floor = (n / x) + (n % x != 0) + 1;
            cout << floor << endl;
        }
    }

    return 0;
}