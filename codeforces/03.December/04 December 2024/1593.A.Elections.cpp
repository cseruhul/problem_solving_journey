#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        cout << max(0 * 1ll, max(b, c) + 1 - a) << " " << max(0 * 1ll, max(a, c) + 1 - b) << " " << max(0 * 1ll, max(a, b) + 1 - c) << endl;
    }

    return 0;
}