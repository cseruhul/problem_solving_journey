#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t, l, r;

    cin >> t;

    while (t--)
    {
        cin >> l >> r;

        double n = r - l + 1;
        double sum = n / 2 * (r + l);

        cout << sum << endl;
    }

    return 0;
}